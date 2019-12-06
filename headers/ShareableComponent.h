#pragma once

class ShareableComponent {

public:

    void willPickup(Actor &, ItemActor const&)const;
    void _getItemPriority(ShareableDefinition const&, ItemStack const&)const;
    void _isItemLowerPriority(ShareableDefinition const&, int, int)const;
    void wantsMore(Actor const&, ItemStack const&)const;
    bool hasSurplus(Actor &, ItemStack const&, bool)const;
    bool hasSurplus(Actor &, ItemStack const&, ItemStack&, bool)const;
    void getSlotToSwap(Actor &, ItemActor const&)const;
    void getCountToPickUp(Actor &, ItemActor const&)const;
    void _getMaxItemAmount(ShareableDefinition const&, ItemStack const&)const;
    void ShareableComponent(ShareableComponent&&);
};
