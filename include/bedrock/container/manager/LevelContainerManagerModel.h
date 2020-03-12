#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "ContainerManagerModel.h"


class LevelContainerManagerModel : ContainerManagerModel {

public:
    virtual void init();
    virtual void broadcastChanges();
    ~LevelContainerManagerModel();
    virtual void setData(int, int);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void getItems();
    virtual bool isValid(float);
    void getBlockPos()const;
    std::string getEntityName()const;
    void setBlockPos(BlockPos const&);
    void getEntityUniqueID()const;
//  LevelContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType); //TODO: incomplete function definition
    void _getBlockEntity();
    void setEntityUniqueID(ActorUniqueID);
    void _getEntity();
//  LevelContainerManagerModel(ContainerID, Player &, ActorUniqueID); //TODO: incomplete function definition
    void _onBlockSlotChanged(int, ItemStack const&, ItemStack const&);
    void _getContainer();
};
