#pragma once

class AnimationComponentID {

public:

    void AnimationComponentID(void);
    void AnimationComponentID(ActorUniqueID const&, unsigned short, AttachableSlotIndex);
    void getHash(void)const;
};
