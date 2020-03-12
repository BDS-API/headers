#pragma once

#include "../../../unmapped/HashedString.h"
#include "ActorAnimationControllerInfo.h"
#include "ActorAnimationControllerGroup.h"
#include <memory>


class ActorAnimationControllerPtr {

public:
    static long NONE;

    void get()const;
    void getName()const;
    void get();
    void operator->()const;
    ~ActorAnimationControllerPtr();
    void operator==(ActorAnimationControllerPtr const&)const;
    ActorAnimationControllerPtr();
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
    bool isNull()const;
    void operator!=(ActorAnimationControllerPtr const&)const;
    ActorAnimationControllerPtr(ActorAnimationControllerGroup &, HashedString const&);
    void operator->();
    ActorAnimationControllerPtr(std::shared_ptr<ActorAnimationControllerInfo>);
};
