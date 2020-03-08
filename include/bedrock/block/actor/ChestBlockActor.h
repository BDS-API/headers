#pragma once

#include "../../../unmapped/ContainerContentChangeListener"
#include "../../item/ItemStack"
#include "../../nbt/CompoundTag"
#include "../../actor/Player"
#include "../unmapped/BlockSource"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../item/ItemInstance"
#include "../../../unmapped/DataLoadHelper"


class ChestBlockActor : RandomizableBlockActorFillingContainer {

public:
    virtual ChestBlockActor::~ChestBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void onMove();
    virtual void onRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache();
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &, BlockPos const&);
    virtual void getName()const;
    virtual void getContainer();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    virtual void getContainerSize()const;
    virtual void getMaxStackSize()const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void loadItems(CompoundTag const&, Level &);
    virtual void saveItems(CompoundTag &)const;
    virtual void stopOpen(Player &);
    virtual void clearInventory(int);
    virtual void setContainerChanged(int);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);
    virtual void _canOpenThis(BlockSource &)const;
    virtual void getObstructionAABB()const;
    virtual void _detectEntityObstruction(BlockSource &)const;

    ChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&, bool);
    void createChestBlockEntity(BlockPos const&);
    void createTrappedChestBlockEntity(BlockPos const&);
    bool isLargeChest()const;
    void denyNotifyPlayersChange();
    void _unpair();
    void _saveClientSideState(CompoundTag &)const;
    bool canPairWith(BlockActor *, BlockSource &);
    void pairWith(ChestBlockActor*, bool);
    void _validatePairedChest(BlockSource &);
    void _tickOpenLid(BlockSource &);
    void _getCenter(float &, float &, float &);
    void getOpenCount()const;
    void forceCloseChest(BlockSource &);
    void _closeChest(BlockSource &, Player *);
    void _playerClosedContainer(Player &);
    void _tryToPairWith(BlockSource &, BlockPos const&);
    void _legacyDetectBlockObstruction(BlockSource &)const;
    void _detectBlockObstruction(BlockSource &)const;
    bool isMainSubchest();
    bool canOpen(BlockSource &)const;
    void unpair(BlockSource &);
    bool isTrappedChest()const;
    void getPairedChestPosition();
    void getModelOffsetX();
    void openBy(Player &);
    void getOpenness()const;
    void setOpenness(float);
    void getOldOpenness()const;
    void setOldOpenness(float);
    void onMove(BlockSource &, BlockPos const&, BlockPos const&);
    void getIsGlobalChest();
    bool isFindable()const;
    void setFindable(bool);
};
