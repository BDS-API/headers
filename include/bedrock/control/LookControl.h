#pragma once

#include "Control.h"


class LookControl : Control {

public:
    virtual void tick(Mob &);
    ~LookControl();
    virtual void initializeInternal(Mob &);
    LookControl();
};
