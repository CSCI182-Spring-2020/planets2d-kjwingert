#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// Setup the window
	ofBackground(0, 0, 0);
	ofSetCircleResolution(50);
	ofSetVerticalSync(true);
	ofSetFrameRate(60);

	// Setup the sun
	//s = new body(0, 20, 0.0f, new ofColor(248, 222, 126));

}

//--------------------------------------------------------------
void ofApp::update(){
	s->calc();
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofTranslate(ofGetWindowWidth() / 2.0f, ofGetWindowHeight() / 2.0f);
	s->draw();
	
	ofPopMatrix();

	s->calc();
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
