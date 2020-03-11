#pragma once

#include "./PushNotificationMessage.h"


class AppPlatformListener {

public:
    virtual ~AppPlatformListener();
    virtual void onLowMemory();
    virtual void onAppPaused();
    virtual void onAppUnpaused();
    virtual void onAppPreSuspended();
    virtual void onAppSuspended();
    virtual void onAppResumed();
    virtual void onAppFocusLost();
    virtual void onAppFocusGained();
    virtual void onAppTerminated();
//  virtual void onOperationModeChanged(OperationMode); //TODO: incomplete function definition
    virtual void onPerformanceModeChanged(bool);
    virtual void onPushNotificationReceived(PushNotificationMessage const&);
    virtual void onResizeBegin();
    virtual void onResizeEnd();

    AppPlatformListener();
    void initListener(float);
    AppPlatformListener(bool);
    void terminate();
};
