#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/ItemActor"
#include "../bedrock/definition/ShareableDefinition"


class ShareableComponent {

public:

    void willPickup(Actor &, ItemActor const&)const;
    void _getItemPriority(ShareableDefinition const&, ItemStack const&)const;
    void _isItemLowerPriority(ShareableDefinition const&, int, int)const;
    bool wantsMore(Actor const&, ItemStack const&)const;
    bool hasSurplus(Actor &, ItemStack const&, bool)const;
    bool hasSurplus(Actor &, ItemStack const&, ItemStack&, bool)const;
    void getSlotToSwap(Actor &, ItemActor const&)const;
    void getCountToPickUp(Actor &, ItemActor const&)const;
    void _getMaxItemAmount(ShareableDefinition const&, ItemStack const&)const;
    ShareableComponent(ShareableComponent&&);
};
