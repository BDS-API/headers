#pragma once

#include "../../nbt/CompoundTag.h"


class ActorInfo {

public:
    ActorInfo(ActorInfo const&);
    ~ActorInfo();
    ActorInfo();
    void save()const;
    void load(CompoundTag const*);
};
