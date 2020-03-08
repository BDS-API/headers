#pragma once

#include "../../actor/Player"
#include "../../item/ItemStack"


class LevelContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual LevelContainerModel::~LevelContainerModel();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual bool isValid(void);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);

    LevelContainerModel(ContainerEnumName, int, Player &, BlockActorType, BlockPos const&, ContainerCategory);
    LevelContainerModel(ContainerEnumName, int, Player &, ActorUniqueID, ContainerCategory);
    void getContainer(void);
    void _refreshSlot(int);
    void _getEntity(void)const;
    void _getBlockEntity(void)const;
    void _refreshContainer(void);
};
