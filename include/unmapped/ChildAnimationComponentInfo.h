#pragma once

using namespace AnimationComponent;

class ChildAnimationComponentInfo {

public:

    void setDirty(void);
    void getAnimationComponent(Actor &, unsigned short, AttachableSlotIndex);
};
