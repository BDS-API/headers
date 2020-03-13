#pragma once



class HopperComponent {

public:
    HopperComponent(HopperComponent &&); // _ZN15HopperComponentC2EOS_
    HopperComponent(); // _ZN15HopperComponentC2Ev
    void pullInItems(Actor &); // _ZN15HopperComponent11pullInItemsER5Actor
    void getLastPosition()const; // _ZNK15HopperComponent15getLastPositionEv
    HopperComponent(HopperComponent const&); // _ZN15HopperComponentC2ERKS_
};
