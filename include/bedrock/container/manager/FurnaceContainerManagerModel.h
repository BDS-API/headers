#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../../unmapped/HashString"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../item/ItemInstance"
#include "../../item/unmapped/ItemDescriptor"
#include "../../item/ItemStack"


class FurnaceContainerManagerModel : ContainerManagerModel {

public:
    virtual FurnaceContainerManagerModel::~FurnaceContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

    FurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&);
    FurnaceContainerManagerModel(Util::HashString const&, ContainerType, BlockActorType, ContainerID, Player &, BlockPos const&);
    void _getIngredientNameFromType(Util::HashString const&);
    void _getFurnaceEntity();
    void _updateResultSlotInfo();
    void getBurnProgress(int);
    void getLitProgress(int);
    bool isFinished(std::string &, int &, int &);
    bool isFurnaceValid(float);
    void grantExperienceForSmelting(ItemInstance const&, int);
    void fireItemSmeltedEvent(ItemDescriptor const&);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getOutputId()const;
    void getBlockPos()const;
    void getBlockActorType()const;
    void _onFurnaceIngredientSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFurnaceFuelSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFurnaceResultSlotChanged(int, ItemStack const&, ItemStack const&);
};
