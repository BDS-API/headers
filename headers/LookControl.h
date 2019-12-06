#pragma once

class LookControl : Control {

public:
    virtual ~LookControl();
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);

    void LookControl(void);
};
