#pragma once

class ItemEventCoordinator {

public:

    void onInventoryItemOpened(bool);
    void onInventoryItemClosed(void);
    void onItemTransferredFromContainer(ItemInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void onItemTransferredToContainer(ItemInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void onPreviewItemPopulatedInContainer(ItemInstance const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void onInventoryLayoutSelected(int, int);
    void onInventoryItemCraftedAutomaticallyByRecipe(ItemStack const&);
    void onRecipeSelected(ItemStack const&);
    void onItemSmelted(Player &, ItemDescriptor const&, ItemDescriptor const&);
    void onItemSpawnedActor(ItemInstance const&, Actor const&);
    void onItemModifiedActor(ItemInstance const&, Actor const&);
    void onItemSelectedSlot(int);
    void onItemSelected(ItemInstance const&);
    void ItemEventCoordinator(void);
};
