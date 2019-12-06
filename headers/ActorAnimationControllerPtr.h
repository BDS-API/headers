#pragma once

class ActorAnimationControllerPtr {

public:
    static long ActorAnimationControllerPtr::NONE;


    void ActorAnimationControllerPtr(void);
    void ActorAnimationControllerPtr(ActorAnimationControllerGroup &, HashedString const&);
    void ActorAnimationControllerPtr(std::shared_ptr<ActorAnimationControllerInfo>);
    void get(void)const;
    void get(void);
    bool isNull(void)const;
    void getName(void)const;
    void ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
};
