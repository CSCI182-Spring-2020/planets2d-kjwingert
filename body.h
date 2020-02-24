#pragma once
#include "ofMain.h"


class body
{
public:
	body() {};
	body(float distance, float size, float speed, ofColor*);

	float _distance = 0;
	float _size = 0;
	float _speed = 0;
	glm::vec2 _position;
	ofColor* bodyColor = NULL;


};

