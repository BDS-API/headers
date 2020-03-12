#pragma once



class HopperComponent {

public:
    HopperComponent(HopperComponent &&);
    HopperComponent(HopperComponent const&);
    void getLastPosition()const;
    void pullInItems(Actor &);
    HopperComponent();
};
