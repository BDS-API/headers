#pragma once

#include "../bedrock/actor/Actor.h"
#include "./HopperComponent.h"


class HopperComponent {

public:

    HopperComponent(HopperComponent &&);
    HopperComponent();
    void pullInItems(Actor &);
    void getLastPosition()const;
    HopperComponent(HopperComponent const&);
};
