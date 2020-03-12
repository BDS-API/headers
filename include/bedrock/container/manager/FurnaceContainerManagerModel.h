#pragma once

#include "../../item/ItemStack.h"
#include "ContainerManagerModel.h"
#include "../../../unmapped/HashString.h"
#include "../../item/ItemInstance.h"
#include <string>
#include "../../../unmapped/ContainerItemStack.h"
#include "../../util/BlockPos.h"
#include "../../item/unmapped/ItemDescriptor.h"
#include "../../actor/Player.h"


class FurnaceContainerManagerModel : ContainerManagerModel {

public:
    ~FurnaceContainerManagerModel();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void init();
    virtual void getItems();
    virtual void setData(int, int);
    virtual void getSlot(int);
    virtual void broadcastChanges();
//  FurnaceContainerManagerModel(Util::HashString const&, ContainerType, BlockActorType, ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void _onFurnaceResultSlotChanged(int, ItemStack const&, ItemStack const&);
    std::string getOutputName()const;
    void getBlockActorType()const;
    void grantExperienceForSmelting(ItemInstance const&, int);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    bool isFurnaceValid(float);
    void getBurnProgress(int);
    void getBlockPos()const;
    void getOutputId()const;
    void _getFurnaceEntity();
    void _onFurnaceIngredientSlotChanged(int, ItemStack const&, ItemStack const&);
    bool isFinished(std::string &, int &, int &);
//  FurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&); //TODO: incomplete function definition
    void getLitProgress(int);
    void _updateResultSlotInfo();
    void fireItemSmeltedEvent(ItemDescriptor const&);
    void _getIngredientNameFromType(Util::HashString const&);
    void _onFurnaceFuelSlotChanged(int, ItemStack const&, ItemStack const&);
};
