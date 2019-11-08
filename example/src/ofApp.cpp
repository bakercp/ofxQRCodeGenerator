#include "ofApp.h"


void ofApp::setup()
{
    for (std::size_t i = 0; i < 100; i++)
    {
        ofxQRCodeGenerator code;
        code.generate("http://www.baidu.com");
        codes.push_back(code);
    }

}


void ofApp::draw()
{
    int x = 0;
    int y = 0;

    int size = 10;

    for (std::size_t i = 0; i < codes.size(); i++)
    {
        ofPushMatrix();
        ofTranslate(x, y);
        codes[i].draw(size);

        if (x + (size * 33) > ofGetWidth())
        {
            x = 0;
            y += (size * 33);
        }
        else
        {
            x += (size * 33);
        }

        ofPopMatrix();
    }
}
