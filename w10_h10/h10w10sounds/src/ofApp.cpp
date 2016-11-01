#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myFont.load("text.ttf", 90);
    play.addListener(this, &ofApp::playPressed);
    stop.addListener(this, &ofApp::stopPressed);
    
    gui.setup();
    gui.add(play.setup("play"));
    gui.add(stop.setup("stop"));
    gui.add(volume.setup("volume", 1.0, 0.0, 1.0));
    gui.add(speed.setup("speed", 1.0, -3.0, 3.0));
    
    sample.loadSound("beat.mp3");
    
    
    fftSmooth = new float [8192];
    for (int i = 0; i < 8192; i++) {
        fftSmooth[i] = 0;
    }

    bands = 64;
    sample.setLoop(true);
    

}

//--------------------------------------------------------------
void ofApp::update(){
    // This is the code from the audio reactive shapes
    ofSoundUpdate();
    
    float * value = ofSoundGetSpectrum(bands);
    for (int i = 0; i <bands; i++){
        fftSmooth[i] *= 0.9f;
        if (fftSmooth[i] < value[i]){
            fftSmooth[i] = value[i];
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0);
    myFont.drawString("Nas", 700, 100);
    gui.draw();
    sample.setVolume(volume);
    sample.setSpeed(speed);
    
    // This is the code from the audio reactive shapes
    
    ofSetColor(ofRandom(25,255 ));
    for (int i = 0; i < bands; i++){
        ofCircle(ofGetWidth()/2, ofGetHeight()/2, -(fftSmooth[i]*150));
    }
    

}
void ofApp::playPressed(){
    sample.play();
}
void ofApp::stopPressed(){
    sample.stop();
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
