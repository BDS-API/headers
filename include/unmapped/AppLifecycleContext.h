#pragma once



class AppLifecycleContext {

public:
    void setHasGraphicsContext(bool);
    void applyNewState();
    void setFocus(bool);
    void transitionEndRenderingThisFrame();
    AppLifecycleContext();
    void transitionBeginRenderingThisFrame();
    bool canRender()const;
};
