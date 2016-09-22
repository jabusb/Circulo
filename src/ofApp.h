#pragma once

#include "ofMain.h"
#include "Pixels.h"
#include "Line.h"

class ofApp : public ofBaseApp{

	public:

		Line line; 
		Pixels pixel;

		float angulo;
		int x2 = 0;
		int	y2 = 0;

		void setup();
		void update();
		void draw();

		void Circulo(int x, int y, int radius, int red, int green, int blue);
		
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
