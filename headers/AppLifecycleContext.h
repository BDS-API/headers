#pragma once

class AppLifecycleContext {

public:

    void AppLifecycleContext(void);
    bool canRender(void)const;
    void setHasGraphicsContext(bool);
    void setFocus(bool);
    void transitionBeginRenderingThisFrame(void);
    void applyNewState(void);
    void transitionEndRenderingThisFrame(void);
};
