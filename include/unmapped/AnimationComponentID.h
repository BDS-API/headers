#pragma once



class AnimationComponentID {

public:
    AnimationComponentID(); // _ZN20AnimationComponentIDC2Ev
//  AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition // _ZN20AnimationComponentIDC2ERK13ActorUniqueIDt19AttachableSlotIndex
    void operator<(AnimationComponentID const&)const; // _ZNK20AnimationComponentIDltERKS_
    void getHash()const; // _ZNK20AnimationComponentID7getHashEv
    void operator==(AnimationComponentID const&)const; // _ZNK20AnimationComponentIDeqERKS_
};
