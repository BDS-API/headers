#pragma once

#include <string>


class ItemEventCoordinator {

public:
    void onInventoryLayoutSelected(int, int);
    void onInventoryItemOpened(bool);
    void onPreviewItemPopulatedInContainer(ItemInstance const&, std::string const&);
    void onInventoryItemCraftedAutomaticallyByRecipe(ItemStack const&);
    void onRecipeSelected(ItemStack const&);
    void onItemTransferredToContainer(ItemInstance const&, std::string const&);
    void onItemModifiedActor(ItemInstance const&, Actor const&);
    void onItemSelected(ItemInstance const&);
    void onItemSelectedSlot(int);
    void onInventoryItemClosed();
    void onItemSpawnedActor(ItemInstance const&, Actor const&);
    void onItemSmelted(Player &, ItemDescriptor const&, ItemDescriptor const&);
    ~ItemEventCoordinator();
    ItemEventCoordinator();
    void onItemTransferredFromContainer(ItemInstance const&, std::string const&);
};
