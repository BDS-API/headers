#pragma once

class LevelContainerManagerModel : ContainerManagerModel {

public:
    virtual ~LevelContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);
    virtual bool isValid(float);

    void LevelContainerManagerModel(ContainerID, Player &, BlockPos const&, BlockActorType);
    void LevelContainerManagerModel(ContainerID, Player &, ActorUniqueID);
    void getEntityUniqueID(void)const;
    void setEntityUniqueID(ActorUniqueID);
    void getBlockPos(void)const;
    void setBlockPos(BlockPos const&);
    void _getBlockEntity(void);
    void _getEntity(void);
    void _getContainer(void);
    void _onBlockSlotChanged(int, ItemStack const&, ItemStack const&);
};
