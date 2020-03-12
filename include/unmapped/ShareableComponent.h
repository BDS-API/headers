#pragma once

#include "../bedrock/definition/ShareableDefinition.h"
#include "../bedrock/actor/ItemActor.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"


class ShareableComponent {

public:
    void _getItemPriority(ShareableDefinition const&, ItemStack const&)const;
    void willPickup(Actor &, ItemActor const&)const;
    bool hasSurplus(Actor &, ItemStack const&, bool)const;
    void _isItemLowerPriority(ShareableDefinition const&, int, int)const;
    bool hasSurplus(Actor &, ItemStack const&, ItemStack &, bool)const;
    void getCountToPickUp(Actor &, ItemActor const&)const;
    bool wantsMore(Actor const&, ItemStack const&)const;
    void _getMaxItemAmount(ShareableDefinition const&, ItemStack const&)const;
    ShareableComponent(ShareableComponent &&);
    void getSlotToSwap(Actor &, ItemActor const&)const;
};
