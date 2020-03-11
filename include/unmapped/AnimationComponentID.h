#pragma once

#include "./AnimationComponentID.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class AnimationComponentID {

public:

    AnimationComponentID();
//  AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition
    void operator<(AnimationComponentID const&)const;
    void getHash()const;
    void operator==(AnimationComponentID const&)const;
};
