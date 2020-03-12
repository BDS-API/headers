#pragma once

#include "../bedrock/nbt/CompoundTag.h"


class CompoundTagUpdater {

public:
    CompoundTagUpdater(unsigned int);
    void getVersion()const;
    void update(CompoundTag &)const;
    ~CompoundTagUpdater();
};
