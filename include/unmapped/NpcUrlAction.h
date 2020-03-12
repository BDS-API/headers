#pragma once

#include "NpcAction.h"


class NpcUrlAction : NpcAction {

public:
    virtual void toJson();
    ~NpcUrlAction();
    NpcUrlAction();
};
