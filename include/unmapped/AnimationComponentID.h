#pragma once

#include "../bedrock/actor/unmapped/ActorUniqueID"


class AnimationComponentID {

public:

    AnimationComponentID(void);
    AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex);
    void getHash()const;
};
