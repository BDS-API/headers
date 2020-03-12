#pragma once



class ShareableComponent {

public:
    void getSlotToSwap(Actor &, ItemActor const&)const;
    bool hasSurplus(Actor &, ItemStack const&, ItemStack &, bool)const;
    void willPickup(Actor &, ItemActor const&)const;
    void _isItemLowerPriority(ShareableDefinition const&, int, int)const;
    ShareableComponent(ShareableComponent &&);
    void _getMaxItemAmount(ShareableDefinition const&, ItemStack const&)const;
    void _getItemPriority(ShareableDefinition const&, ItemStack const&)const;
    bool wantsMore(Actor const&, ItemStack const&)const;
    bool hasSurplus(Actor &, ItemStack const&, bool)const;
    void getCountToPickUp(Actor &, ItemActor const&)const;
};
