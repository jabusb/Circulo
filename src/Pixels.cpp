#include "Pixels.h"

void Pixels::putPixel(int x, int y, int r, int g, int b) {
	pix.setColor(x, y, (r, g, b)); 

}

void Pixels::getPixel() {
	tex.loadData(pix); 
	
}

void Pixels::init() {
	pix.allocate(1024, 768, OF_PIXELS_RGB); 
	tex.allocate(1024, 768, GL_RGB); 
		
		
}

void Pixels::draw() {
	tex.draw(0, 0);
}