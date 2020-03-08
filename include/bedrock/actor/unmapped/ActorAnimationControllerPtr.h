#pragma once

#include "../../../unmapped/HashedString"


class ActorAnimationControllerPtr {

public:
    static long NONE;


    ActorAnimationControllerPtr(void);
    ActorAnimationControllerPtr(ActorAnimationControllerGroup &, HashedString const&);
    ActorAnimationControllerPtr(std::shared_ptr<ActorAnimationControllerInfo>);
    void get()const;
    void get();
    bool isNull()const;
    void getName()const;
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
};
