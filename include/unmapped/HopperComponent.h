#pragma once

#include "../bedrock/actor/Actor"


class HopperComponent {

public:

    HopperComponent(HopperComponent&&);
    HopperComponent(void);
    void pullInItems(Actor &);
    void getLastPosition(void)const;
    HopperComponent(HopperComponent const&);
};
