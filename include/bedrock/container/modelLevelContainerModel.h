#pragma once

#include "ContainerModel.h"
#include "../../item/ItemStack.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class LevelContainerModel : ContainerModel {

public:
    virtual bool isValid();
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    ~LevelContainerModel();
    virtual void releaseResources();
    virtual void containerContentChanged(int);
    virtual void postInit();
    void getContainer();
//  LevelContainerModel(ContainerEnumName, int, Player &, ActorUniqueID, ContainerCategory); //TODO: incomplete function definition
    void _refreshContainer();
    void _getBlockEntity()const;
    void _getEntity()const;
//  LevelContainerModel(ContainerEnumName, int, Player &, BlockActorType, BlockPos const&, ContainerCategory); //TODO: incomplete function definition
    void _refreshSlot(int);
};
