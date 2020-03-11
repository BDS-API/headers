#pragma once



class AppLifecycleContext {

public:

    AppLifecycleContext();
    bool canRender()const;
    void setHasGraphicsContext(bool);
    void setFocus(bool);
    void transitionBeginRenderingThisFrame();
    void applyNewState();
    void transitionEndRenderingThisFrame();
};
