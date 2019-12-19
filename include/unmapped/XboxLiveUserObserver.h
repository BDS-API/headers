#pragma once

using namespace Social;

class XboxLiveUserObserver : Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock> {

public:
    virtual void Social::XboxLiveUserObserver::~XboxLiveUserObserver();

    XboxLiveUserObserver(void);
};
