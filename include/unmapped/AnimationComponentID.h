#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID.h"


class AnimationComponentID {

public:
    void getHash()const;
//  AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition
    void operator==(AnimationComponentID const&)const;
    AnimationComponentID();
    void operator<(AnimationComponentID const&)const;
};
