#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
private:
	// Sun
	glm::vec2 sunPosition;
	float sunSize;
	ofColor sunColor;

	// Earth
    glm::vec2 earthPosition;
	float earthSize;
	ofColor earthColor;
	float earthSpeed;
	float earthDistance;

	// Moon
	glm::vec2 moonPosition;
	float moonSize;
	ofColor moonColor;
	float moonSpeed;
	float moonDistance;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
