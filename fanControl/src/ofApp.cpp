#include "ofApp.h"
//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(200);              //背景色の決定
    ofSetFrameRate(60);             //フレームレート
    ofSetCircleResolution(32);      //円の描画解像度
    
    //sreialを設定
   mySerial.setup("/dev/cu.usbmodem1421", 9600);
    
    // GUIを設定
    gui.setup();
    gui.add(pwm.set("pwm", 100, 0, 255));
}

//--------------------------------------------------------------
void ofApp::update(){
   
    //sliderの値を反映
    myByte = (unsigned char)pwm;
    
    //シリアル送信
    bool byteWasWritten = mySerial.writeByte(myByte);
    
    //エラーチェック
    if ( !byteWasWritten ) {
        printf("byte was not written to serial port \n");
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    //ファンを描画
    ofSetColor(0, 0, 0);
    ofDrawRectangle(ofGetWidth()/2-25, 550, 50, 80);    //ofGetWidth()でウィンドウの幅を取得できる
    ofDrawCircle(ofGetWidth()/2+30, 650,60);
    ofSetColor(255, 255, 255);
    ofDrawCircle(ofGetWidth()/2+30, 650,30);


    //球を描画
    ofSetColor(255,150,0);
    ofDrawCircle(ofGetWidth()/2, 500-1.5*pwm, 50);      //y座標にsliderの値を設定
    
    // GUIを表示
    gui.draw();

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
