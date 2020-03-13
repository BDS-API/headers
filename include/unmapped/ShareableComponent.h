#pragma once



class ShareableComponent {

public:
    void willPickup(Actor &, ItemActor const&)const; // _ZNK18ShareableComponent10willPickupER5ActorRK9ItemActor
    void _getItemPriority(ShareableDefinition const&, ItemStack const&)const; // _ZNK18ShareableComponent16_getItemPriorityERK19ShareableDefinitionRK9ItemStack
    void _isItemLowerPriority(ShareableDefinition const&, int, int)const; // _ZNK18ShareableComponent20_isItemLowerPriorityERK19ShareableDefinitionii
    bool wantsMore(Actor const&, ItemStack const&)const; // _ZNK18ShareableComponent9wantsMoreERK5ActorRK9ItemStack
    bool hasSurplus(Actor &, ItemStack const&, bool)const; // _ZNK18ShareableComponent10hasSurplusER5ActorRK9ItemStackb
    bool hasSurplus(Actor &, ItemStack const&, ItemStack &, bool)const; // _ZNK18ShareableComponent10hasSurplusER5ActorRK9ItemStackRS2_b
    void getSlotToSwap(Actor &, ItemActor const&)const; // _ZNK18ShareableComponent13getSlotToSwapER5ActorRK9ItemActor
    void getCountToPickUp(Actor &, ItemActor const&)const; // _ZNK18ShareableComponent16getCountToPickUpER5ActorRK9ItemActor
    void _getMaxItemAmount(ShareableDefinition const&, ItemStack const&)const; // _ZNK18ShareableComponent17_getMaxItemAmountERK19ShareableDefinitionRK9ItemStack
    ShareableComponent(ShareableComponent &&); // _ZN18ShareableComponentC2EOS_
};
