#pragma once

class AnimationComponent::ChildAnimationComponentInfo {

public:

    void setDirty(void);
    void getAnimationComponent(Actor &, unsigned short, AttachableSlotIndex);
};
