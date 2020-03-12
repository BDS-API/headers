#pragma once

#include <string>
#include <vector>
#include "RandomizableBlockActorFillingContainer.h"


class ChestBlockActor : RandomizableBlockActorFillingContainer {

public:
    virtual void clearCache();
    virtual void _detectEntityObstruction(BlockSource &)const;
    virtual void playOpenSound(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void triggerEvent(int, int);
    virtual void getObstructionAABB()const;
    virtual void playCloseSound(BlockSource &);
    virtual std::string getName()const;
    ~ChestBlockActor();
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void clearInventory(int);
    virtual void startOpen(Player &);
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void getContainerSize()const;
    virtual void onMove();
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void setItem(int, ItemStack const&);
    virtual void tick(BlockSource &);
    virtual void getContainer();
    virtual void onChanged(BlockSource &);
    virtual void getMaxStackSize()const;
    virtual void stopOpen(Player &);
    virtual void saveItems(CompoundTag &)const;
    virtual void loadItems(CompoundTag const&, Level &);
    virtual void setContainerChanged(int);
    virtual void _canOpenThis(BlockSource &)const;
    virtual void save(CompoundTag &)const;
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getItem(int)const;
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void onRemoved(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::string> &, BlockPos const&);
    virtual void onPlace(BlockSource &);
    void setOpenness(float);
    void getPairedChestPosition();
    void _detectBlockObstruction(BlockSource &)const;
    void getModelOffsetX();
    bool canPairWith(BlockActor *, BlockSource &);
    void getOpenCount()const;
    void _validatePairedChest(BlockSource &);
    void getIsGlobalChest();
    bool isTrappedChest()const;
//  ChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&, bool); //TODO: incomplete function definition
    void forceCloseChest(BlockSource &);
    void openBy(Player &);
    void unpair(BlockSource &);
    void pairWith(ChestBlockActor *, bool);
    void _tryToPairWith(BlockSource &, BlockPos const&);
    bool isFindable()const;
    void _tickOpenLid(BlockSource &);
    void _getCenter(float &, float &, float &);
    void _unpair();
    void onMove(BlockSource &, BlockPos const&, BlockPos const&);
    bool isLargeChest()const;
    void _saveClientSideState(CompoundTag &)const;
    void getOpenness()const;
    bool canOpen(BlockSource &)const;
    void setFindable(bool);
    void _closeChest(BlockSource &, Player *);
    void getOldOpenness()const;
    void createChestBlockEntity(BlockPos const&);
    bool isMainSubchest();
    void denyNotifyPlayersChange();
    void createTrappedChestBlockEntity(BlockPos const&);
    void _legacyDetectBlockObstruction(BlockSource &)const;
    void setOldOpenness(float);
    void _playerClosedContainer(Player &);
};
