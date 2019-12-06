#pragma once

class ActorInfo {

public:

    void ActorInfo(void);
    void ActorInfo(ActorInfo const&);
    void save(void)const;
    void load(CompoundTag const*);
};
