#pragma once



class AppLifecycleContext {

public:

    AppLifecycleContext(void);
    bool canRender(void)const;
    void setHasGraphicsContext(bool);
    void setFocus(bool);
    void transitionBeginRenderingThisFrame(void);
    void applyNewState(void);
    void transitionEndRenderingThisFrame(void);
};
