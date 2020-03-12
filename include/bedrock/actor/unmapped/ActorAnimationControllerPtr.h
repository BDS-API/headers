#pragma once

#include <memory>


class ActorAnimationControllerPtr {

public:
    static long NONE;

    void operator->();
    void getName()const;
    void operator->()const;
    void get()const;
    bool isNull()const;
    ActorAnimationControllerPtr(ActorAnimationControllerGroup &, HashedString const&);
    ~ActorAnimationControllerPtr();
    void get();
    void operator==(ActorAnimationControllerPtr const&)const;
    ActorAnimationControllerPtr(std::shared_ptr<ActorAnimationControllerInfo>);
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
    ActorAnimationControllerPtr();
    void operator!=(ActorAnimationControllerPtr const&)const;
};
