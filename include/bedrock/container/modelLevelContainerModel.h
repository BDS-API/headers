#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ContainerModel.h"


class LevelContainerModel : ContainerModel {

public:
    virtual bool isValid();
    virtual void releaseResources();
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual void _getContainerOffset()const;
    ~LevelContainerModel();
    virtual void containerContentChanged(int);
    virtual void postInit();
    void _getBlockEntity()const;
    void _refreshContainer();
    void getContainer();
//  LevelContainerModel(ContainerEnumName, int, Player &, ActorUniqueID, ContainerCategory); //TODO: incomplete function definition
    void _refreshSlot(int);
    void _getEntity()const;
//  LevelContainerModel(ContainerEnumName, int, Player &, BlockActorType, BlockPos const&, ContainerCategory); //TODO: incomplete function definition
};
