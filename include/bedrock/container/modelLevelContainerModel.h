#pragma once

#include "../../util/BlockPos.h"
#include "../../item/ItemStack.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "./ContainerModel.h"
#include "../../actor/Player.h"


class LevelContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~LevelContainerModel();
    virtual void postInit();
    virtual void releaseResources();
    virtual bool isValid();
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);

//  LevelContainerModel(ContainerEnumName, int, Player &, BlockActorType, BlockPos const&, ContainerCategory); //TODO: incomplete function definition
//  LevelContainerModel(ContainerEnumName, int, Player &, ActorUniqueID, ContainerCategory); //TODO: incomplete function definition
    void getContainer();
    void _refreshSlot(int);
    void _getEntity()const;
    void _getBlockEntity()const;
    void _refreshContainer();
};
