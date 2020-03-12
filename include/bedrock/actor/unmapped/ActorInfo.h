#pragma once



class ActorInfo {

public:
    void save()const;
    ~ActorInfo();
    ActorInfo();
    void load(CompoundTag const*);
    ActorInfo(ActorInfo const&);
};
