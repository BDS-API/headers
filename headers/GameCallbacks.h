#pragma once

class GameCallbacks {

    virtual void GameCallbacks::~GameCallbacks();
    virtual void GameCallbacks::~GameCallbacks();
    virtual void onLowMemory(void);
    virtual void onAppPaused(void);
    virtual void onAppUnpaused(void);
    virtual void onAppPreSuspended(void);
    virtual void onAppSuspended(void);
    virtual void onAppResumed(void);
    virtual void onAppFocusLost(void);
}
