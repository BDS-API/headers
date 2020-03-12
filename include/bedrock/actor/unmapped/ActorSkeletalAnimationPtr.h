#pragma once



class ActorSkeletalAnimationPtr {

public:
    static long NONE;

    ~ActorSkeletalAnimationPtr();
    bool isNull()const;
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    void get()const;
    void operator->()const;
    void operator->();
    void get();
    void operator==(ActorSkeletalAnimationPtr const&)const;
    void operator!=(ActorSkeletalAnimationPtr const&)const;
    ActorSkeletalAnimationPtr();
    ActorSkeletalAnimationPtr(ActorAnimationGroup &, HashedString const&);
    void getName()const;
};
