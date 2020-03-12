#pragma once

#include "../bedrock/actor/Actor.h"


class HopperComponent {

public:
    HopperComponent();
    HopperComponent(HopperComponent const&);
    HopperComponent(HopperComponent &&);
    void pullInItems(Actor &);
    void getLastPosition()const;
};
