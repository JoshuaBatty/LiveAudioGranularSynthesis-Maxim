#pragma once


#include "ofMain.h"
#include "ofxUI.h"
#include "GrainPlayer.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );

        void audioIn(float * input, int bufferSize, int nChannels);
        void audioOut(float * output, int bufferSize, int nChannels);

        
        int sampleRate;
        int bufferSize;
        ofSoundStream soundStream;
        ofSoundMixer mixer;
    
        GrainPlayer grainPlayer;
        
        //GUI
        ofxUICanvas *gui;
        void guiEvent(ofxUIEventArgs &e);
};
