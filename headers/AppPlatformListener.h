#pragma once

class AppPlatformListener {

    virtual void AppPlatformListener::~AppPlatformListener();
    virtual void AppPlatformListener::~AppPlatformListener();
    virtual void onLowMemory(void);
    virtual void onAppPaused(void);
    virtual void onAppUnpaused(void);
    virtual void onAppPreSuspended(void);
    virtual void onAppSuspended(void);
    virtual void onAppResumed(void);
    virtual void onAppFocusLost(void);
    virtual void onAppFocusGained(void);
    virtual void onAppTerminated(void);
    virtual void onOperationModeChanged(OperationMode);
    virtual void onPerformanceModeChanged(bool);
    virtual void onPushNotificationReceived(PushNotificationMessage const&);
    virtual void onResizeBegin(void);
    virtual void onResizeEnd(void);
}
