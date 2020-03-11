#pragma once

#include "../../../unmapped/HashedString.h"
#include "./ActorSkeletalAnimationPtr.h"
#include "./ActorAnimationGroup.h"


class ActorSkeletalAnimationPtr {

public:
    static long NONE;


    ~ActorSkeletalAnimationPtr();
    ActorSkeletalAnimationPtr();
    ActorSkeletalAnimationPtr(ActorSkeletalAnimationPtr const&);
    ActorSkeletalAnimationPtr(ActorAnimationGroup &, HashedString const&);
    void operator->()const;
    void operator->();
    void get()const;
    void get();
    bool isNull()const;
    void getName()const;
    void operator==(ActorSkeletalAnimationPtr const&)const;
    void operator!=(ActorSkeletalAnimationPtr const&)const;
};
