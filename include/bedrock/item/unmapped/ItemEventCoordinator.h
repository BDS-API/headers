#pragma once

#include <string>


class ItemEventCoordinator {

public:
    void onInventoryItemOpened(bool); // _ZN20ItemEventCoordinator21onInventoryItemOpenedEb
    void onInventoryItemClosed(); // _ZN20ItemEventCoordinator21onInventoryItemClosedEv
    void onItemTransferredFromContainer(ItemInstance const&, std::string const&); // _ZN20ItemEventCoordinator30onItemTransferredFromContainerERK12ItemInstanceRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onItemTransferredToContainer(ItemInstance const&, std::string const&); // _ZN20ItemEventCoordinator28onItemTransferredToContainerERK12ItemInstanceRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onPreviewItemPopulatedInContainer(ItemInstance const&, std::string const&); // _ZN20ItemEventCoordinator33onPreviewItemPopulatedInContainerERK12ItemInstanceRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onInventoryLayoutSelected(int, int); // _ZN20ItemEventCoordinator25onInventoryLayoutSelectedEii
    void onInventoryItemCraftedAutomaticallyByRecipe(ItemStack const&); // _ZN20ItemEventCoordinator43onInventoryItemCraftedAutomaticallyByRecipeERK9ItemStack
    void onRecipeSelected(ItemStack const&); // _ZN20ItemEventCoordinator16onRecipeSelectedERK9ItemStack
    void onItemSmelted(Player &, ItemDescriptor const&, ItemDescriptor const&); // _ZN20ItemEventCoordinator13onItemSmeltedER6PlayerRK14ItemDescriptorS4_
    void onItemSpawnedActor(ItemInstance const&, Actor const&); // _ZN20ItemEventCoordinator18onItemSpawnedActorERK12ItemInstanceRK5Actor
    void onItemModifiedActor(ItemInstance const&, Actor const&); // _ZN20ItemEventCoordinator19onItemModifiedActorERK12ItemInstanceRK5Actor
    void onItemSelectedSlot(int); // _ZN20ItemEventCoordinator18onItemSelectedSlotEi
    void onItemSelected(ItemInstance const&); // _ZN20ItemEventCoordinator14onItemSelectedERK12ItemInstance
    ~ItemEventCoordinator(); // _ZN20ItemEventCoordinatorD2Ev
    ItemEventCoordinator(); // _ZN20ItemEventCoordinatorC2Ev
};
