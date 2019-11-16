#pragma once

class ServerInstance : AppPlatformListener, GameCallbacks {

    virtual void ServerInstance::~ServerInstance();
    virtual void ServerInstance::~ServerInstance();
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
    virtual void onLevelCorrupt(void);
    virtual void onGameModeChanged(void);
    virtual void onTick(int, int);
    virtual void onInternetUpdate(void);
    virtual void onGameSessionReset(void);
    virtual void onLevelExit(void);
    virtual void updateScreens(void);
    virtual void ;
    virtual void `non-virtual thunk to'ServerInstance::~ServerInstance();
    virtual void `non-virtual thunk to'ServerInstance::~ServerInstance();
    virtual void `non-virtual thunk to'ServerInstance::onLevelCorrupt(void);
    virtual void `non-virtual thunk to'ServerInstance::onGameModeChanged(void);
    virtual void `non-virtual thunk to'ServerInstance::onTick(int, int);
    virtual void `non-virtual thunk to'ServerInstance::onInternetUpdate(void);
    virtual void `non-virtual thunk to'ServerInstance::onGameSessionReset(void);
    virtual void `non-virtual thunk to'ServerInstance::onLevelExit(void);
    virtual void `non-virtual thunk to'ServerInstance::updateScreens(void);
}
