#pragma once



class ActorSkeletalAnimationPtr {

public:
    static long NONE;


    ActorSkeletalAnimationPtr(void);
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    ActorSkeletalAnimationPtr(ActorAnimationGroup &, HashedString const&);
    void get(void)const;
    void get(void);
    bool isNull(void)const;
    void getName(void)const;
};
