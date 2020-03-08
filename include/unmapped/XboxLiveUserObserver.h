#pragma once

#include "../core/SingleThreadedLock"


using namespace Social;

class XboxLiveUserObserver : Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock> {

public:
    Social::XboxLiveUserObserver::~XboxLiveUserObserver()

    XboxLiveUserObserver(void);
};
