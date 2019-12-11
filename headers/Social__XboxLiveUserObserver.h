#pragma once

class Social::XboxLiveUserObserver : Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock> {

public:
    virtual ~XboxLiveUserObserver();

    void XboxLiveUserObserver(void);
};
