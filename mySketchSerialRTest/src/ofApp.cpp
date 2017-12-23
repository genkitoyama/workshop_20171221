#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //serial設定
    Serial.setup("/dev/cu.usbmodem1411",9600);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //serialを読み込む
    //ヘッダ・上位バイト・下位バイトの3バイトを一気に読み込む
    if (Serial.available() >= 3) {
        int head = Serial.readByte();                //ヘッダ(今回は128に設定)を読み込む
        
        if (head == 128){
            int high = Serial.readByte();           //上位バイト
            int low = Serial.readByte();            //下位バイト
            value = (high << 7) + low;              //値をビットシフトして結合
            
            if (0 <= value && value <= 1023){
                printf("value is %d \n", value);    //コンソールに出力
            }
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

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
