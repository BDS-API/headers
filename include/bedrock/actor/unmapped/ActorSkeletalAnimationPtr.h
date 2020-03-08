#pragma once

#include "../../../unmapped/HashedString"


class ActorSkeletalAnimationPtr {

public:
    static long NONE;


    ActorSkeletalAnimationPtr(void);
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    ActorSkeletalAnimationPtr(ActorAnimationGroup &, HashedString const&);
    void get()const;
    void get();
    bool isNull()const;
    void getName()const;
};
