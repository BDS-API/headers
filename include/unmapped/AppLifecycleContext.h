#pragma once



class AppLifecycleContext {

public:
    AppLifecycleContext(); // _ZN19AppLifecycleContextC2Ev
    bool canRender()const; // _ZNK19AppLifecycleContext9canRenderEv
    void setHasGraphicsContext(bool); // _ZN19AppLifecycleContext21setHasGraphicsContextEb
    void setFocus(bool); // _ZN19AppLifecycleContext8setFocusEb
    void transitionBeginRenderingThisFrame(); // _ZN19AppLifecycleContext33transitionBeginRenderingThisFrameEv
    void applyNewState(); // _ZN19AppLifecycleContext13applyNewStateEv
    void transitionEndRenderingThisFrame(); // _ZN19AppLifecycleContext31transitionEndRenderingThisFrameEv
};
