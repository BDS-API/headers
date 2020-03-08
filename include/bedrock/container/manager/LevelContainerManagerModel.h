#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../item/ItemStack"


class LevelContainerManagerModel : ContainerManagerModel {

public:
    virtual LevelContainerManagerModel::~LevelContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void init();
    virtual bool isValid(float);

    LevelContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType);
    LevelContainerManagerModel(ContainerID, Player &, ActorUniqueID);
    void getEntityUniqueID()const;
    void setEntityUniqueID(ActorUniqueID);
    void getBlockPos()const;
    void setBlockPos(BlockPos const&);
    void _getBlockEntity();
    void _getEntity();
    void _getContainer();
    void _onBlockSlotChanged(int, ItemStack const&, ItemStack const&);
};
