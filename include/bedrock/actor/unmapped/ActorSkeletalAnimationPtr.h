#pragma once

#include "../../../unmapped/HashedString.h"
#include "ActorAnimationGroup.h"


class ActorSkeletalAnimationPtr {

public:
    static long NONE;

    void operator->()const;
    void get();
    ActorSkeletalAnimationPtr(ActorAnimationGroup &, HashedString const&);
    ~ActorSkeletalAnimationPtr();
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    bool isNull()const;
    ActorSkeletalAnimationPtr();
    void operator!=(ActorSkeletalAnimationPtr const&)const;
    void operator==(ActorSkeletalAnimationPtr const&)const;
    void getName()const;
    void operator->();
    void get()const;
};
