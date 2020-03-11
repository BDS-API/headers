#pragma once

#include "./ActorInfo.h"
#include "../../nbt/CompoundTag.h"


class ActorInfo {

public:

    ~ActorInfo();
    ActorInfo();
    ActorInfo(ActorInfo const&);
    void save()const;
    void load(CompoundTag const*);
};
