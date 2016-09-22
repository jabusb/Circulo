#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	line.init(); 

	Circulo(512,384,250,255,255,0);
}

//--------------------------------------------------------------
void ofApp::update() {

	line.update();

	
}

//--------------------------------------------------------------
void ofApp::draw(){

 line.draw(); 
}

void ofApp::Circulo(int x, int y, int radius, int red, int green, int blue)
{
	for (int angle = 0; angle < 360; angle++) {
		angulo = radius*cos(angle);
		x2 = round(angulo);
		angulo = radius*sin(angle);
		y2 = round(angulo);
		line.Linea(x, y, x + x2, y + y2, red, green, blue);
	}

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
