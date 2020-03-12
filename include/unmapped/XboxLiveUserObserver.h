#pragma once

#include "../core/SingleThreadedLock.h"


namespace Social {

    class XboxLiveUserObserver /*Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

    public:
        ~XboxLiveUserObserver();
        XboxLiveUserObserver();
    };
}
