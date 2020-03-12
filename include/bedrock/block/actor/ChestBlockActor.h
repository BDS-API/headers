#pragma once

#include "RandomizableBlockActorFillingContainer.h"
#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include <string>
#include "../../../unmapped/ContainerContentChangeListener.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../item/ItemInstance.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include <vector>
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class ChestBlockActor : RandomizableBlockActorFillingContainer {

public:
    virtual void playCloseSound(BlockSource &);
    virtual void loadItems(CompoundTag const&, Level &);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void tick(BlockSource &);
    virtual void setContainerChanged(int);
    virtual std::string getName()const;
    ~ChestBlockActor();
    virtual void stopOpen(Player &);
    virtual void getMaxStackSize()const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void _detectEntityObstruction(BlockSource &)const;
    virtual void saveItems(CompoundTag &)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void onRemoved(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getContainerSize()const;
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void clearInventory(int);
    virtual void getDebugText(std::vector<std::string> &, BlockPos const&);
    virtual void getObstructionAABB()const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void clearCache();
    virtual void save(CompoundTag &)const;
    virtual void playOpenSound(BlockSource &);
    virtual void _canOpenThis(BlockSource &)const;
    virtual void onChanged(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void onMove();
    virtual void startOpen(Player &);
    virtual void getContainer();
    void getOldOpenness()const;
    void _tickOpenLid(BlockSource &);
    void unpair(BlockSource &);
    void getOpenness()const;
    bool isTrappedChest()const;
    void getPairedChestPosition();
    void denyNotifyPlayersChange();
    bool isMainSubchest();
    void getOpenCount()const;
    void openBy(Player &);
    void getModelOffsetX();
//  ChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&, bool); //TODO: incomplete function definition
    void getIsGlobalChest();
    bool canOpen(BlockSource &)const;
    void _detectBlockObstruction(BlockSource &)const;
    void onMove(BlockSource &, BlockPos const&, BlockPos const&);
    void _saveClientSideState(CompoundTag &)const;
    void pairWith(ChestBlockActor *, bool);
    void setOldOpenness(float);
    bool isLargeChest()const;
    void _legacyDetectBlockObstruction(BlockSource &)const;
    void _playerClosedContainer(Player &);
    void _unpair();
    void createTrappedChestBlockEntity(BlockPos const&);
    bool isFindable()const;
    void forceCloseChest(BlockSource &);
    void setFindable(bool);
    void setOpenness(float);
    bool canPairWith(BlockActor *, BlockSource &);
    void _validatePairedChest(BlockSource &);
    void _getCenter(float &, float &, float &);
    void _tryToPairWith(BlockSource &, BlockPos const&);
    void createChestBlockEntity(BlockPos const&);
    void _closeChest(BlockSource &, Player *);
};
