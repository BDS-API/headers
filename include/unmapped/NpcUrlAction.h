#pragma once

#include "NpcAction.h"


class NpcUrlAction : NpcAction {

public:
    ~NpcUrlAction();
    virtual void toJson();
    NpcUrlAction();
};
