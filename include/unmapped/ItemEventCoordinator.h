#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/item/ItemInstance"
#include "../bedrock/item/ItemStack"


class ItemEventCoordinator {

public:

    void onInventoryItemOpened(bool);
    void onInventoryItemClosed(void);
    void onItemTransferredFromContainer(ItemInstance const&, std::string const&);
    void onItemTransferredToContainer(ItemInstance const&, std::string const&);
    void onPreviewItemPopulatedInContainer(ItemInstance const&, std::string const&);
    void onInventoryLayoutSelected(int, int);
    void onInventoryItemCraftedAutomaticallyByRecipe(ItemStack const&);
    void onRecipeSelected(ItemStack const&);
    void onItemSmelted(Player &, ItemDescriptor const&, ItemDescriptor const&);
    void onItemSpawnedActor(ItemInstance const&, Actor const&);
    void onItemModifiedActor(ItemInstance const&, Actor const&);
    void onItemSelectedSlot(int);
    void onItemSelected(ItemInstance const&);
    ItemEventCoordinator(void);
};
