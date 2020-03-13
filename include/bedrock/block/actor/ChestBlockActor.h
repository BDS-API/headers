#pragma once

#include <string>
#include "RandomizableBlockActorFillingContainer.h"
#include <vector>


class ChestBlockActor : RandomizableBlockActorFillingContainer {

public:
    ~ChestBlockActor(); // _ZN15ChestBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN15ChestBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK15ChestBlockActor4saveER11CompoundTag
    virtual void saveItemInstanceData(CompoundTag &); // _ZN15ChestBlockActor20saveItemInstanceDataER11CompoundTag
    virtual void tick(BlockSource &); // _ZN15ChestBlockActor4tickER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN15ChestBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN15ChestBlockActor15getUpdatePacketER11BlockSource
    virtual void onPlace(BlockSource &); // _ZN15ChestBlockActor7onPlaceER11BlockSource
    virtual void onMove(); // _ZN15ChestBlockActor6onMoveEv
    virtual void onRemoved(BlockSource &); // _ZN15ChestBlockActor9onRemovedER11BlockSource
    virtual void triggerEvent(int, int); // _ZN15ChestBlockActor12triggerEventEii
    virtual void clearCache(); // _ZN15ChestBlockActor10clearCacheEv
    virtual void onNeighborChanged(BlockSource &, BlockPos const&); // _ZN15ChestBlockActor17onNeighborChangedER11BlockSourceRK8BlockPos
    virtual void getCrackEntity(BlockSource &, BlockPos const&); // _ZN15ChestBlockActor14getCrackEntityER11BlockSourceRK8BlockPos
    virtual void getDebugText(std::vector<std::string> &, BlockPos const&); // _ZN15ChestBlockActor12getDebugTextERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EERK8BlockPos
    virtual std::string getName()const; // _ZNK15ChestBlockActor7getNameB5cxx11Ev
    virtual void getContainer(); // _ZN15ChestBlockActor12getContainerEv
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN15ChestBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void startOpen(Player &); // _ZN15ChestBlockActor9startOpenER6Player
    virtual void getContainerSize()const; // _ZNK15ChestBlockActor16getContainerSizeEv
    virtual void getMaxStackSize()const; // _ZNK15ChestBlockActor15getMaxStackSizeEv
    virtual void getItem(int)const; // _ZNK15ChestBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN15ChestBlockActor7setItemEiRK9ItemStack
    virtual void loadItems(CompoundTag const&, Level &); // _ZN15ChestBlockActor9loadItemsERK11CompoundTagR5Level
    virtual void saveItems(CompoundTag &)const; // _ZNK15ChestBlockActor9saveItemsER11CompoundTag
    virtual void stopOpen(Player &); // _ZN15ChestBlockActor8stopOpenER6Player
    virtual void clearInventory(int); // _ZN15ChestBlockActor14clearInventoryEi
    virtual void setContainerChanged(int); // _ZN15ChestBlockActor19setContainerChangedEi
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK15ChestBlockActor13canPushInItemER11BlockSourceiiRK12ItemInstance
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const; // _ZNK15ChestBlockActor14canPullOutItemER11BlockSourceiiRK12ItemInstance
    virtual void addContentChangeListener(ContainerContentChangeListener *); // _ZN15ChestBlockActor24addContentChangeListenerEP30ContainerContentChangeListener
    virtual void removeContentChangeListener(ContainerContentChangeListener *); // _ZN15ChestBlockActor27removeContentChangeListenerEP30ContainerContentChangeListener
    virtual void playOpenSound(BlockSource &); // _ZN15ChestBlockActor13playOpenSoundER11BlockSource
    virtual void playCloseSound(BlockSource &); // _ZN15ChestBlockActor14playCloseSoundER11BlockSource
    virtual void _canOpenThis(BlockSource &)const; // _ZNK15ChestBlockActor12_canOpenThisER11BlockSource
    virtual void getObstructionAABB()const; // _ZNK15ChestBlockActor18getObstructionAABBEv
    virtual void _detectEntityObstruction(BlockSource &)const; // _ZNK15ChestBlockActor24_detectEntityObstructionER11BlockSource
//  ChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&, bool); //TODO: incomplete function definition // _ZN15ChestBlockActorC2E14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE20BlockActorRendererIdRK8BlockPosb
    void createChestBlockEntity(BlockPos const&); // _ZN15ChestBlockActor22createChestBlockEntityERK8BlockPos
    void createTrappedChestBlockEntity(BlockPos const&); // _ZN15ChestBlockActor29createTrappedChestBlockEntityERK8BlockPos
    bool isLargeChest()const; // _ZNK15ChestBlockActor12isLargeChestEv
    void denyNotifyPlayersChange(); // _ZN15ChestBlockActor23denyNotifyPlayersChangeEv
    void _unpair(); // _ZN15ChestBlockActor7_unpairEv
    void _saveClientSideState(CompoundTag &)const; // _ZNK15ChestBlockActor20_saveClientSideStateER11CompoundTag
    bool canPairWith(BlockActor *, BlockSource &); // _ZN15ChestBlockActor11canPairWithEP10BlockActorR11BlockSource
    void pairWith(ChestBlockActor *, bool); // _ZN15ChestBlockActor8pairWithEPS_b
    void _validatePairedChest(BlockSource &); // _ZN15ChestBlockActor20_validatePairedChestER11BlockSource
    void _tickOpenLid(BlockSource &); // _ZN15ChestBlockActor12_tickOpenLidER11BlockSource
    void _getCenter(float &, float &, float &); // _ZN15ChestBlockActor10_getCenterERfS0_S0_
    void getOpenCount()const; // _ZNK15ChestBlockActor12getOpenCountEv
    void forceCloseChest(BlockSource &); // _ZN15ChestBlockActor15forceCloseChestER11BlockSource
    void _closeChest(BlockSource &, Player *); // _ZN15ChestBlockActor11_closeChestER11BlockSourceP6Player
    void _playerClosedContainer(Player &); // _ZN15ChestBlockActor22_playerClosedContainerER6Player
    void _tryToPairWith(BlockSource &, BlockPos const&); // _ZN15ChestBlockActor14_tryToPairWithER11BlockSourceRK8BlockPos
    void _legacyDetectBlockObstruction(BlockSource &)const; // _ZNK15ChestBlockActor29_legacyDetectBlockObstructionER11BlockSource
    void _detectBlockObstruction(BlockSource &)const; // _ZNK15ChestBlockActor23_detectBlockObstructionER11BlockSource
    bool isMainSubchest(); // _ZN15ChestBlockActor14isMainSubchestEv
    bool canOpen(BlockSource &)const; // _ZNK15ChestBlockActor7canOpenER11BlockSource
    void unpair(BlockSource &); // _ZN15ChestBlockActor6unpairER11BlockSource
    bool isTrappedChest()const; // _ZNK15ChestBlockActor14isTrappedChestEv
    void getPairedChestPosition(); // _ZN15ChestBlockActor22getPairedChestPositionEv
    void getModelOffsetX(); // _ZN15ChestBlockActor15getModelOffsetXEv
    void openBy(Player &); // _ZN15ChestBlockActor6openByER6Player
    void getOpenness()const; // _ZNK15ChestBlockActor11getOpennessEv
    void setOpenness(float); // _ZN15ChestBlockActor11setOpennessEf
    void getOldOpenness()const; // _ZNK15ChestBlockActor14getOldOpennessEv
    void setOldOpenness(float); // _ZN15ChestBlockActor14setOldOpennessEf
    void onMove(BlockSource &, BlockPos const&, BlockPos const&); // _ZN15ChestBlockActor6onMoveER11BlockSourceRK8BlockPosS4_
    void getIsGlobalChest(); // _ZN15ChestBlockActor16getIsGlobalChestEv
    bool isFindable()const; // _ZNK15ChestBlockActor10isFindableEv
    void setFindable(bool); // _ZN15ChestBlockActor11setFindableEb
};
