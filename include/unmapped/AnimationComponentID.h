#pragma once

class AnimationComponentID {

public:

    AnimationComponentID(void);
    AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex);
    void getHash(void)const;
};
