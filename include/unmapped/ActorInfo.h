#pragma once

class ActorInfo {

public:

    ActorInfo(void);
    ActorInfo(ActorInfo const&);
    void save(void)const;
    void load(CompoundTag const*);
};
