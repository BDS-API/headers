#pragma once



class ActorInfo {

public:
    ~ActorInfo(); // _ZN9ActorInfoD2Ev
    ActorInfo(); // _ZN9ActorInfoC2Ev
    ActorInfo(ActorInfo const&); // _ZN9ActorInfoC2ERKS_
    void save()const; // _ZNK9ActorInfo4saveEv
    void load(CompoundTag const*); // _ZN9ActorInfo4loadEPK11CompoundTag
};
