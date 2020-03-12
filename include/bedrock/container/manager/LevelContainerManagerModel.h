#pragma once

#include "../../item/ItemStack.h"
#include "ContainerManagerModel.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class LevelContainerManagerModel : ContainerManagerModel {

public:
    ~LevelContainerManagerModel();
    virtual void getItems();
    virtual void getSlot(int);
    virtual bool isValid(float);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void broadcastChanges();
    virtual void init();
    virtual void setData(int, int);
    void getBlockPos()const;
//  LevelContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType); //TODO: incomplete function definition
    void _onBlockSlotChanged(int, ItemStack const&, ItemStack const&);
    void setEntityUniqueID(ActorUniqueID);
    void getEntityUniqueID()const;
    void _getBlockEntity();
    std::string getEntityName()const;
    void setBlockPos(BlockPos const&);
    void _getEntity();
//  LevelContainerManagerModel(ContainerID, Player &, ActorUniqueID); //TODO: incomplete function definition
    void _getContainer();
};
