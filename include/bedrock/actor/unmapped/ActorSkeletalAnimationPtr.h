#pragma once



class ActorSkeletalAnimationPtr {

public:
    static long NONE;

    ~ActorSkeletalAnimationPtr(); // _ZN25ActorSkeletalAnimationPtrD2Ev
    ActorSkeletalAnimationPtr(); // _ZN25ActorSkeletalAnimationPtrC2Ev
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&); // _ZN25ActorSkeletalAnimationPtrC2ERKS_
    ActorSkeletalAnimationPtr(ActorAnimationGroup &, HashedString const&); // _ZN25ActorSkeletalAnimationPtrC2ER19ActorAnimationGroupRK12HashedString
    void operator->()const; // _ZNK25ActorSkeletalAnimationPtrptEv
    void operator->(); // _ZN25ActorSkeletalAnimationPtrptEv
    void get()const; // _ZNK25ActorSkeletalAnimationPtr3getEv
    void get(); // _ZN25ActorSkeletalAnimationPtr3getEv
    bool isNull()const; // _ZNK25ActorSkeletalAnimationPtr6isNullEv
    void getName()const; // _ZNK25ActorSkeletalAnimationPtr7getNameEv
    void operator==(ActorSkeletalAnimationPtr const&)const; // _ZNK25ActorSkeletalAnimationPtreqERKS_
    void operator!=(ActorSkeletalAnimationPtr const&)const; // _ZNK25ActorSkeletalAnimationPtrneERKS_
};
