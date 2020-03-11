#pragma once

#include "../actor/Mob.h"
#include "./Control.h"


class LookControl : Control {

public:
    virtual ~LookControl();
    virtual void initializeInternal(Mob &);
    virtual void tick(Mob &);

    LookControl();
};
