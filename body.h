#pragma once
#include "ofMain.h"

enum BodyType { Empty, Sun, Planet, MoonPlanet };

class body
{
public:
	body() { };
	body(float, float, float, ofColor*, BodyType bodyType);
	~body() {
		if (_bodyColor != NULL) delete _bodyColor;
		delete[] _bodies;
	};
	BodyType _bodyType = Empty;

	float _distance = 0;
	float _size = 0;
	float _speed = 0;
	glm::vec2 _position;
	ofColor* _bodyColor = NULL;

	// Array of all daughter bodies
	body* _bodies = NULL;
	int _bodyCount = 0;

	bool createSolarSystem();
	bool setBodyAttributes(int distance, int size, float speed,
		ofColor* color, BodyType bt);

	void draw();
	void calc();

};

