#pragma once

#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../item/ItemStack"


class LevelContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual LevelContainerModel::~LevelContainerModel()
    virtual void postInit();
    virtual void releaseResources();
    virtual bool isValid();
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);

    LevelContainerModel(ContainerEnumName, int, Player &, BlockActorType, BlockPos const&, ContainerCategory);
    LevelContainerModel(ContainerEnumName, int, Player &, ActorUniqueID, ContainerCategory);
    void getContainer();
    void _refreshSlot(int);
    void _getEntity()const;
    void _getBlockEntity()const;
    void _refreshContainer();
};
