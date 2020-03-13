#pragma once

#include <memory>


class ActorAnimationControllerPtr {

public:
    static long NONE;

    ~ActorAnimationControllerPtr(); // _ZN27ActorAnimationControllerPtrD2Ev
    ActorAnimationControllerPtr(); // _ZN27ActorAnimationControllerPtrC2Ev
    ActorAnimationControllerPtr(ActorAnimationControllerGroup &, HashedString const&); // _ZN27ActorAnimationControllerPtrC2ER29ActorAnimationControllerGroupRK12HashedString
    ActorAnimationControllerPtr(std::shared_ptr<ActorAnimationControllerInfo>); // _ZN27ActorAnimationControllerPtrC2ESt10shared_ptrI28ActorAnimationControllerInfoE
    void operator->()const; // _ZNK27ActorAnimationControllerPtrptEv
    void operator->(); // _ZN27ActorAnimationControllerPtrptEv
    void get()const; // _ZNK27ActorAnimationControllerPtr3getEv
    void get(); // _ZN27ActorAnimationControllerPtr3getEv
    bool isNull()const; // _ZNK27ActorAnimationControllerPtr6isNullEv
    void getName()const; // _ZNK27ActorAnimationControllerPtr7getNameEv
    void operator==(ActorAnimationControllerPtr const&)const; // _ZNK27ActorAnimationControllerPtreqERKS_
    void operator!=(ActorAnimationControllerPtr const&)const; // _ZNK27ActorAnimationControllerPtrneERKS_
    ActorAnimationControllerPtr(ActorAnimationControllerPtr const&); // _ZN27ActorAnimationControllerPtrC2ERKS_
};
