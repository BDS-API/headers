#pragma once

#include "Control.h"
#include "../actor/Mob.h"


class LookControl : Control {

public:
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);
    ~LookControl();
    LookControl();
};
