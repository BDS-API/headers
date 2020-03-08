#pragma once



class AppLifecycleContext {

public:

    AppLifecycleContext(void);
    bool canRender()const;
    void setHasGraphicsContext(bool);
    void setFocus(bool);
    void transitionBeginRenderingThisFrame();
    void applyNewState();
    void transitionEndRenderingThisFrame();
};
