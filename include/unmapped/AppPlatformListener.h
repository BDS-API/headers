#pragma once



class AppPlatformListener {

public:
    virtual void onAppFocusGained();
    virtual void onLowMemory();
    virtual void onAppUnpaused();
    virtual void onAppResumed();
    virtual void onResizeBegin();
    virtual void onPerformanceModeChanged(bool);
    virtual void onResizeEnd();
    virtual void onAppSuspended();
    virtual void onAppPreSuspended();
    virtual void onAppPaused();
    virtual void onAppFocusLost();
    virtual void onPushNotificationReceived(PushNotificationMessage const&);
    virtual void onAppTerminated();
    ~AppPlatformListener();
//  virtual void onOperationModeChanged(OperationMode); //TODO: incomplete function definition
    AppPlatformListener(bool);
    void initListener(float);
    AppPlatformListener();
    void terminate();
};
