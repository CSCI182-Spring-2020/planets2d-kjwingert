#include "body.h"

#define PLANET_COUNT 9

body::body(float distance, float size, float speed, ofColor* color, BodyType bodyType)
{
	// Setup the body variables
	_distance = distance;
	_size = size;
	_speed = speed;
	_bodyColor = color;
	// Setup the position
	glm::vec2 vPos(0, distance * -1);
	_position = vPos;
	_bodyType = bodyType;

	// Setup the body (and it's sub-bodies)
	createSolarSystem();
}

bool body::createSolarSystem()
{
	int mDist = 0;
	switch (_bodyType)
	{
	case Sun:
		_bodyCount = 8;
		_bodies = new body[_bodyCount];
		mDist = 60;
		_bodies[0].setBodyAttributes(  // Mercury
			mDist,
			10,
			0.02,
			new ofColor(ofColor::red),
			MoonPlanet);
		_bodies[1].setBodyAttributes(  // Venus
			mDist * 2,
			10,
			0.025,
			new ofColor(ofColor::sandyBrown),
			Planet);
		_bodies[2].setBodyAttributes(  // Earth
			mDist * 3,
			10,
			0.028,
			new ofColor(ofColor::blue),
			MoonPlanet);
		_bodies[2].setBodyAttributes(  // Saturn
			mDist * 3,
			10,
			0.028,
			new ofColor(ofColor::blue),
			MoonPlanet);
		_bodies[2].setBodyAttributes(  // Uranus
			mDist * 3,
			10,
			0.028,
			new ofColor(ofColor::blue),
			MoonPlanet);
		_bodies[2].setBodyAttributes(  // Mars
			mDist * 3,
			10,
			0.028,
			new ofColor(ofColor::blue),
			MoonPlanet);
		_bodies[2].setBodyAttributes(  // Neptune
			mDist * 3,
			10,
			0.028,
			new ofColor(ofColor::blue),
			MoonPlanet);
		_bodies[2].setBodyAttributes(  // Jupiter
			mDist * 3,
			10,
			0.028,
			new ofColor(ofColor::blue),
			MoonPlanet);
		break;
	case MoonPlanet:
		_bodyCount = 1;
		_bodies = new body[_bodyCount];
		mDist = 20;    // Distance between planets
		_bodies[0].setBodyAttributes(   // Mercury
			mDist + _size,
			5, // Body Size
			-.05, // Body Velocity
			new ofColor(155, 155, 155), Empty);
		break;
	default:
		_bodyCount = 0;
		_bodies = NULL;
		break;
	}

	return true;
}

bool body::setBodyAttributes(int distance, int size, float speed, ofColor* color, BodyType bt)
{
	_distance = distance;
	_size = size;
	_speed = speed;
	_bodyColor = color;
	glm::vec2 vPos(0, distance * -1);
	_position = vPos;
	_bodyType = bt;
	createSolarSystem();

	return true;
}

// Draw the body
void body::draw()
{
	ofPushMatrix();

	ofSetColor(*_bodyColor);
	ofTranslate(_position);
	ofDrawCircle(0.0, 0.0, _size);

	for (int i = 0; i < _bodyCount; i++)
		_bodies[i].draw();

	ofPopMatrix();
}

// Calculate the body's position
void body::calc()
{
	// calc the new position of this body
	_position.x = cos(ofGetFrameNum() * _speed) * _distance;
	_position.y = sin(ofGetFrameNum() * _speed) * _distance;

	// Calculate all the sub items of this body
	for (int i = 0; i < _bodyCount; i++)
		_bodies[i].calc();
}