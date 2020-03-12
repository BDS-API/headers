#pragma once

#include <string>
#include "ContainerManagerModel.h"


class FurnaceContainerManagerModel : ContainerManagerModel {

public:
    virtual void broadcastChanges();
    ~FurnaceContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void setData(int, int);
    virtual void getSlot(int);
    virtual void init();
    bool isFinished(std::string &, int &, int &);
//  FurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void getBurnProgress(int);
    void _onFurnaceIngredientSlotChanged(int, ItemStack const&, ItemStack const&);
    std::string getOutputName()const;
    void _updateResultSlotInfo();
    void getOutputId()const;
    void getBlockPos()const;
    void _getFurnaceEntity();
    void _onFurnaceResultSlotChanged(int, ItemStack const&, ItemStack const&);
    void getBlockActorType()const;
    void getLitProgress(int);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void _getIngredientNameFromType(Util::HashString const&);
//  FurnaceContainerManagerModel(Util::HashString const&, ContainerType, BlockActorType, ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void _onFurnaceFuelSlotChanged(int, ItemStack const&, ItemStack const&);
    void grantExperienceForSmelting(ItemInstance const&, int);
    bool isFurnaceValid(float);
    void fireItemSmeltedEvent(ItemDescriptor const&);
};
