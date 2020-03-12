#pragma once



class AppLifecycleContext {

public:
    void setHasGraphicsContext(bool);
    void transitionEndRenderingThisFrame();
    void setFocus(bool);
    AppLifecycleContext();
    bool canRender()const;
    void applyNewState();
    void transitionBeginRenderingThisFrame();
};
