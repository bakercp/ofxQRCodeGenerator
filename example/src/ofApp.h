#pragma once


#include "ofMain.h"
#include "ofxQRCodeGenerator.h"


class ofApp: public ofBaseApp
{
public:
    void setup() override;
    void draw() override;

    std::vector<ofxQRCodeGenerator> codes;

};
