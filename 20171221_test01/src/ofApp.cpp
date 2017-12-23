#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    serial.setup("/dev/cu.usbmodem1461", 9600);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(serial.available() >= 2){     //シリアルに値が2個来たら呼ばれる
        int head = serial.readByte();   //1個目を呼ぶ
        if(head == 255){
            val = serial.readByte();        //シリアルから2個目の値を読み込む
            cout << val << endl;            //コンソールに値を表示するおまじない。 cout と endl の間に << で挟む
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255, 0, 0);
    ofDrawBitmapString(ofToString(val), 20, 20);
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
