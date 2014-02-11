#pragma once

#include "ofMain.h"
#include "ofxiOS.h"
#include "ofxiOSExtras.h"
#include "ace/ACE.h"
#include "ace/OS.h"

#include "yarp/os/all.h"
#include "yarp/os/impl/NameConfig.h"
#include <yarp/os/Network.h>

using namespace yarp::os;
using namespace yarp::os::impl;


class testApp : public ofxiOSApp{
	
    public:
        void setup();
        void update();
        void draw();
        void exit();
	
        void touchDown(ofTouchEventArgs & touch);
        void touchMoved(ofTouchEventArgs & touch);
        void touchUp(ofTouchEventArgs & touch);
        void touchDoubleTap(ofTouchEventArgs & touch);
        void touchCancelled(ofTouchEventArgs & touch);

        void lostFocus();
        void gotFocus();
        void gotMemoryWarning();
        void deviceOrientationChanged(int newOrientation);
    
    
    Network yarp;
    BufferedPort<Bottle> port;
    string test_str;

};


