#pragma once

#include "../actor/Mob"


class LookControl : Control {

public:
    virtual LookControl::~LookControl()
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);

    LookControl(void);
};
