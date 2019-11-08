#include "ofApp.h"


void ofApp::setup()
{
    qr.generate("http://www.baidu.com");
}


void ofApp::draw()
{
    qr.draw(20);
}
