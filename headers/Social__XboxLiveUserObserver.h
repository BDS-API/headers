#pragma once

class Social::XboxLiveUserObserver : Core::Observer_ltSocial::XboxLiveUserObserver_Core::SingleThreadedLock_ge {

    virtual ~XboxLiveUserObserver();
    virtual ~XboxLiveUserObserver();
    virtual void Core::Observer<Social::XboxLiveUserObserver, Core::SingleThreadedLock>::_onSubjectDestroyed(void);
    virtual void onConnect(NetworkIdentifier const&);
    virtual void onUnableToConnect(void);
}
