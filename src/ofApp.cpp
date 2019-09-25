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
    float t1 = t * 0.0100;
    float t2 = t * 0.0050;
    float t3 = t * 0.0025;
    float t4 = t * 0.0200;
    
    t+= 0.05;
    
    float h1 = ofMap( abs(sin(t1 + 0.0)),  0, 1, 0, 255);
    float h2 = ofMap( abs(sin(t2 + 0.0)),  0, 1, 0, 255);
    float h3 = ofMap( abs(sin(t3 + 0.0)), 0, 1, 0, 255);
    float h4 = ofMap( abs(sin(t4 + 0.0)), 0, 1, 0, 255);
    
    ofColor c0,c1,c2,c3;
    c0.setHsb(h1,255,255);
    c1.setHsb(h2,255,255);
    c2.setHsb(h3,255,255);
    c3.setHsb(h4,255,255);
    
    int width  = 1920;//ofGetWidth();
    int height = 1080;//ofGetHeight();
    
    ofMesh temp;
    temp.setMode(OF_PRIMITIVE_TRIANGLES);
    temp.addVertex( ofPoint(0,0) );
    temp.addColor(ofColor(c0.r,c0.g,c0.b));
    temp.addVertex( ofPoint(width,0) );
    temp.addColor(ofColor(c1.r,c1.g,c1.b));
    temp.addVertex( ofPoint(width,height) );
    temp.addColor(ofColor(c2.r,c2.g,c2.b));
    
    
    temp.addVertex( ofPoint(width,height) );
    temp.addColor(ofColor(c2.r,c2.g,c2.b));
    
    temp.addVertex( ofPoint(0,height) );
    temp.addColor(  ofColor(c3.r,c3.g,c3.b));
    temp.addVertex( ofPoint(0,0) );
    temp.addColor(  ofColor(c0.r,c0.g,c0.b));
    temp.draw();
    
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
