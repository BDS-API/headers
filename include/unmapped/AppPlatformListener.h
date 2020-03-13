#pragma once



class AppPlatformListener {

public:
    ~AppPlatformListener(); // _ZN19AppPlatformListenerD2Ev
    virtual void onLowMemory(); // _ZN19AppPlatformListener11onLowMemoryEv
    virtual void onAppPaused(); // _ZN19AppPlatformListener11onAppPausedEv
    virtual void onAppUnpaused(); // _ZN19AppPlatformListener13onAppUnpausedEv
    virtual void onAppPreSuspended(); // _ZN19AppPlatformListener17onAppPreSuspendedEv
    virtual void onAppSuspended(); // _ZN19AppPlatformListener14onAppSuspendedEv
    virtual void onAppResumed(); // _ZN19AppPlatformListener12onAppResumedEv
    virtual void onAppFocusLost(); // _ZN19AppPlatformListener14onAppFocusLostEv
    virtual void onAppFocusGained(); // _ZN19AppPlatformListener16onAppFocusGainedEv
    virtual void onAppTerminated(); // _ZN19AppPlatformListener15onAppTerminatedEv
//  virtual void onOperationModeChanged(OperationMode); //TODO: incomplete function definition // _ZN19AppPlatformListener22onOperationModeChangedE13OperationMode
    virtual void onPerformanceModeChanged(bool); // _ZN19AppPlatformListener24onPerformanceModeChangedEb
    virtual void onPushNotificationReceived(PushNotificationMessage const&); // _ZN19AppPlatformListener26onPushNotificationReceivedERK23PushNotificationMessage
    virtual void onResizeBegin(); // _ZN19AppPlatformListener13onResizeBeginEv
    virtual void onResizeEnd(); // _ZN19AppPlatformListener11onResizeEndEv
    AppPlatformListener(); // _ZN19AppPlatformListenerC2Ev
    void initListener(float); // _ZN19AppPlatformListener12initListenerEf
    AppPlatformListener(bool); // _ZN19AppPlatformListenerC2Eb
    void terminate(); // _ZN19AppPlatformListener9terminateEv
};
