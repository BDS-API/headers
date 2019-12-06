#pragma once

class HopperComponent {

public:

    void HopperComponent(HopperComponent&&);
    void HopperComponent(void);
    void pullInItems(Actor &);
    void getLastPosition(void)const;
    void HopperComponent(HopperComponent const&);
};
