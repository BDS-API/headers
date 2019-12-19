#pragma once

class CompoundTagUpdater {

public:

    void getVersion(void)const;
    CompoundTagUpdater(unsigned int);
    void update(CompoundTag &)const;
};
