#pragma once

class HopperComponent {

public:

    HopperComponent(HopperComponent&&);
    HopperComponent(void);
    void pullInItems(Actor &);
    void getLastPosition(void)const;
    HopperComponent(HopperComponent const&);
};
