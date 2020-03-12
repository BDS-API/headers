#pragma once

#include "ItemDescriptor.h"
#include <string>
#include "../ItemInstance.h"
#include "../../actor/Actor.h"
#include "../ItemStack.h"
#include "../../actor/Player.h"


class ItemEventCoordinator {

public:
    void onInventoryLayoutSelected(int, int);
    void onPreviewItemPopulatedInContainer(ItemInstance const&, std::string const&);
    void onItemSelected(ItemInstance const&);
    void onItemTransferredFromContainer(ItemInstance const&, std::string const&);
    void onItemTransferredToContainer(ItemInstance const&, std::string const&);
    ItemEventCoordinator();
    void onInventoryItemClosed();
    void onInventoryItemCraftedAutomaticallyByRecipe(ItemStack const&);
    void onItemSelectedSlot(int);
    void onItemSpawnedActor(ItemInstance const&, Actor const&);
    ~ItemEventCoordinator();
    void onInventoryItemOpened(bool);
    void onItemSmelted(Player &, ItemDescriptor const&, ItemDescriptor const&);
    void onItemModifiedActor(ItemInstance const&, Actor const&);
    void onRecipeSelected(ItemStack const&);
};
