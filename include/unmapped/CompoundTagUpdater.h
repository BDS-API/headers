#pragma once



class CompoundTagUpdater {

public:
    ~CompoundTagUpdater();
    CompoundTagUpdater(unsigned int);
    void update(CompoundTag &)const;
    void getVersion()const;
};
