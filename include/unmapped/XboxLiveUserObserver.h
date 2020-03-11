#pragma once

#include "../core/SingleThreadedLock.h"
#include "./XboxLiveUserObserver.h"


namespace Social {

class XboxLiveUserObserver /*Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

public:
    virtual ~XboxLiveUserObserver();

    XboxLiveUserObserver();
};

}