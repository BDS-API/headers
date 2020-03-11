#pragma once

#include "./NpcAction.h"


class NpcUrlAction : NpcAction {

public:
    virtual ~NpcUrlAction();
    virtual void toJson();

    NpcUrlAction();
};
