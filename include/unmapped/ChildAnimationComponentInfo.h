#pragma once

#include "../bedrock/actor/Actor.h"


namespace AnimationComponent {

class ChildAnimationComponentInfo {

public:

    void setDirty();
//  void getAnimationComponent(Actor &, unsigned short, AttachableSlotIndex); //TODO: incomplete function definition
    ~ChildAnimationComponentInfo();
};

}