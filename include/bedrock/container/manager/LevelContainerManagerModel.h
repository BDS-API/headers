#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/Player.h"
#include "./ContainerManagerModel.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemStack.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class LevelContainerManagerModel : ContainerManagerModel {

public:
    virtual ~LevelContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

//  LevelContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType); //TODO: incomplete function definition
//  LevelContainerManagerModel(ContainerID, Player &, ActorUniqueID); //TODO: incomplete function definition
    void getEntityUniqueID()const;
    std::string getEntityName()const;
    void setEntityUniqueID(ActorUniqueID);
    void getBlockPos()const;
    void setBlockPos(BlockPos const&);
    void _getBlockEntity();
    void _getEntity();
    void _getContainer();
    void _onBlockSlotChanged(int, ItemStack const&, ItemStack const&);
};
