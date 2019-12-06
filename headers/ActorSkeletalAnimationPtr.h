#pragma once

class ActorSkeletalAnimationPtr {

public:
    static long ActorSkeletalAnimationPtr::NONE;


    void ActorSkeletalAnimationPtr(void);
    void ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    void ActorSkeletalAnimationPtr(ActorAnimationGroup &, HashedString const&);
    void get(void)const;
    void get(void);
    bool isNull(void)const;
    void getName(void)const;
};
