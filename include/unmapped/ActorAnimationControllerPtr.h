#pragma once

class ActorAnimationControllerPtr {

public:
    static long NONE;


    ActorAnimationControllerPtr(void);
    ActorAnimationControllerPtr(ActorAnimationControllerGroup &, HashedString const&);
    ActorAnimationControllerPtr(std::shared_ptr<ActorAnimationControllerInfo>);
    void get(void)const;
    void get(void);
    bool isNull(void)const;
    void getName(void)const;
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&);
};