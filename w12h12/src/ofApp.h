//This Library belongs to Kyle Macdonald

#pragma once

#include "ofMain.h"
#include "ofxCv.h"

class ofApp : public ofBaseApp {
public:
    void setup();
    void update();
    void draw();
//    void keyPressed(int key);
//    void keyReleased(int key);
    
    ofVideoGrabber cam;
    ofImage gray, edge, sobel;
};