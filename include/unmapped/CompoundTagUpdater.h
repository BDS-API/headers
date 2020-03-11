#pragma once

#include "../bedrock/nbt/CompoundTag.h"


class CompoundTagUpdater {

public:

    void getVersion()const;
    ~CompoundTagUpdater();
    CompoundTagUpdater(unsigned int);
    void update(CompoundTag &)const;
};
