#pragma once

#include "../../../unmapped/HashedString.h"
#include "./ActorAnimationControllerInfo.h"
#include <memory>
#include "./ActorAnimationControllerPtr.h"
#include "./ActorAnimationControllerGroup.h"


class ActorAnimationControllerPtr {

public:
    static long NONE;


    ~ActorAnimationControllerPtr();
    ActorAnimationControllerPtr();
    ActorAnimationControllerPtr(ActorAnimationControllerGroup &, HashedString const&);
    ActorAnimationControllerPtr(std::shared_ptr<ActorAnimationControllerInfo>);
    void operator->()const;
    void operator->();
    void get()const;
    void get();
    bool isNull()const;
    void getName()const;
    void operator==(ActorAnimationControllerPtr const&)const;
    void operator!=(ActorAnimationControllerPtr const&)const;
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
};
