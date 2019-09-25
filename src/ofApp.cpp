#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
    float t1 = t * 0.100;
    float t2 = t * 0.050;
    float t3 = t * 0.025;
    float t4 = t * 0.200;
    
    t+= 0.05;
    
    float h1 = ofMap( abs(sin(t1 + 0.0)),  0, 1, 0, 255);
    float h2 = ofMap( abs(sin(t2 + 0.0)),  0, 1, 0, 255);
    float h3 = ofMap( abs(sin(t3 + 0.0)), 0, 1, 0, 255);
    float h4 = ofMap( abs(sin(t4 + 0.0)), 0, 1, 0, 255);
    
    ofColor c1,c2,c3,c4;
    c1.setHsb(h1,255,255);
    c2.setHsb(h2,255,255);
    c3.setHsb(h3,255,255);
    c4.setHsb(h4,255,255);
    
    int w = 1920;//ofGetWidth();
    int h = 1080;//ofGetHeight();
    
    glBegin(GL_QUADS);
    glColor3f(c1.r/255.0, c1.g/255.0, c1.b / 255.0);
    glVertex2f(0,0);
    
    glColor3f(c2.r/255.0, c2.g/255.0, c2.b / 255.0);
    glVertex2f(w,0);
    
    glColor3f(c3.r/255.0, c3.g/255.0, c3.b / 255.0);
    glVertex2f(w,h);
    
    glColor3f(c4.r/255.0, c4.g/255.0, c4.b / 255.0);
    glVertex2f(0,h);
    
    glEnd();
    
    string filename ;
    if(ofGetFrameNum() < 10)
        filename ="saveFrames/000" + ofToString(ofGetFrameNum()) +".png";
    else if(ofGetFrameNum() < 100)
        filename ="saveFrames/00" + ofToString(ofGetFrameNum()) +".png";
    else if(ofGetFrameNum() < 1000)
        filename ="saveFrames/0" + ofToString(ofGetFrameNum()) +".png";
    else
        filename ="saveFrames/"+ ofToString(ofGetFrameNum()) +".png";
    
    //ofSaveScreen(filename);
    
    //cout << t3 << endl;
    //if(t3 >= TWO_PI*4)
    //    ofExit();
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
