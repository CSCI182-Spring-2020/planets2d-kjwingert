#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// Setup the window
	ofBackground(0, 0, 0);
	ofSetCircleResolution(50);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);

	// Setup the sun
	sunPosition.x = ofGetWindowWidth() / 2;
	sunPosition.y = ofGetWindowHeight() / 2;
	sunSize = 40.0f;
	sunColor = ofColor::yellow; 

	// Setup the earth
	earthColor = ofColor::lightGreen;
	earthSize = sunSize / 4;
	earthDistance = 200.0f;
	earthSpeed = .05;

	// Setup the moon
	moonColor = ofColor::white;
	moonSize = sunSize / 4;
	moonDistance = 250.0f;
	moonSpeed = .04;

}

//--------------------------------------------------------------
void ofApp::update(){
	float n = ofGetFrameNum();
	earthPosition.x = cos(ofGetFrameNum() * earthSpeed) * earthDistance;
	earthPosition.y = sin(ofGetFrameNum() * earthSpeed) * earthDistance;

	moonPosition.x = cos(ofGetFrameNum() * moonSpeed) * moonDistance;
	moonPosition.y = sin(ofGetFrameNum() * moonSpeed) * moonDistance;
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(sunColor);
	ofTranslate(sunPosition);
	ofDrawCircle(0.0f, 0.0f, sunSize);

	// Draw earth
	ofSetColor(earthColor);
	ofTranslate(earthPosition);
	ofDrawCircle(0.0f, 0.0f, earthSize);

	// Draw moon
	ofSetColor(moonColor);
	ofTranslate(moonPosition);
	ofDrawCircle(0.0f, 0.0f, moonSize);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
