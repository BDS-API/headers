#pragma once

#include "../bedrock/nbt/CompoundTag"


class CompoundTagUpdater {

public:

    void getVersion()const;
    CompoundTagUpdater(unsigned int);
    void update(CompoundTag &)const;
};
