#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	// start a test service
	service.start("Test Service!", "_http._tcp", 8080);
  // look for a service
  browser.lookup("_spacebro._tcp");
  ofAddListener(browser.serviceNewE, this, &testApp::onServiceNew);
  ofAddListener(browser.serviceRemoveE, this, &testApp::onServiceRemove);
}

//--------------------------------------------------------------
void testApp::onServiceNew(ofxAvahiService &s){
  ofLogNotice("Found spacebro:" + s.name + " | " + s.host_name + " | " + s.domain + " | " + s.ip + " | " + ofToString(s.port));
}

//--------------------------------------------------------------
void testApp::onServiceRemove(ofxAvahiService &s){
  ofLogNotice("Spacebro went down:" + s.name + " | " + s.host_name + " | " + s.domain + " | " + s.ip + " | " + ofToString(s.port));

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
