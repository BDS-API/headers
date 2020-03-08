#pragma once

#include "../../nbt/CompoundTag"


class ActorInfo {

public:

    ActorInfo(void);
    ActorInfo(ActorInfo const&);
    void save()const;
    void load(CompoundTag const*);
};
