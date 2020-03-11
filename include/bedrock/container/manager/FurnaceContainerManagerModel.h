#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include <string>
#include "../../../unmapped/ContainerItemStack.h"
#include "../../../unmapped/HashString.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include "../../actor/Player.h"


class FurnaceContainerManagerModel : ContainerManagerModel {

public:
    virtual ~FurnaceContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();

//  FurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
//  FurnaceContainerManagerModel(Util::HashString const&, ContainerType, BlockActorType, ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
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
    std::string getOutputName()const;
    void getOutputId()const;
    void getBlockPos()const;
    void getBlockActorType()const;
    void _onFurnaceIngredientSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFurnaceFuelSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFurnaceResultSlotChanged(int, ItemStack const&, ItemStack const&);
};
