#pragma once

class GameCallbacks {

    virtual void ~GameCallbacks();
    virtual void ~GameCallbacks();
    virtual void onLowMemory(void);
    virtual void AppPlatformListener::onAppPaused(void);
    virtual void AppPlatformListener::onAppUnpaused(void);
    virtual void AppPlatformListener::onAppPreSuspended(void);
    virtual void AppPlatformListener::onAppSuspended(void);
    virtual void AppPlatformListener::onAppResumed(void);
    virtual void AppPlatformListener::onAppFocusLost(void);
}
