#pragma once

#include "PushNotificationMessage.h"


class AppPlatformListener {

public:
    virtual void onResizeBegin();
    virtual void onResizeEnd();
    virtual void onAppSuspended();
//  virtual void onOperationModeChanged(OperationMode); //TODO: incomplete function definition
    ~AppPlatformListener();
    virtual void onLowMemory();
    virtual void onAppPaused();
    virtual void onPerformanceModeChanged(bool);
    virtual void onAppPreSuspended();
    virtual void onAppFocusLost();
    virtual void onAppTerminated();
    virtual void onAppFocusGained();
    virtual void onAppUnpaused();
    virtual void onAppResumed();
    virtual void onPushNotificationReceived(PushNotificationMessage const&);
    AppPlatformListener();
    AppPlatformListener(bool);
    void terminate();
    void initListener(float);
};
