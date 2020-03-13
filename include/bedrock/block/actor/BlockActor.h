#pragma once

#include <string>
#include <vector>
#include "../../util/AABB.h"


class BlockActor {

public:
    static std::string mIdClassMap;
    static std::string mClassIdMap;

    ~BlockActor(); // _ZN10BlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN10BlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK10BlockActor4saveER11CompoundTag
    virtual void saveItemInstanceData(CompoundTag &); // _ZN10BlockActor20saveItemInstanceDataER11CompoundTag
    virtual void saveBlockData(CompoundTag &, BlockSource &)const; // _ZNK10BlockActor13saveBlockDataER11CompoundTagR11BlockSource
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &); // _ZN10BlockActor13loadBlockDataERK11CompoundTagR11BlockSourceR14DataLoadHelper
    virtual void onCustomTagLoadDone(BlockSource &); // _ZN10BlockActor19onCustomTagLoadDoneER11BlockSource
    virtual void tick(BlockSource &); // _ZN10BlockActor4tickER11BlockSource
    virtual bool isFinished(); // _ZN10BlockActor10isFinishedEv
    virtual void onChanged(BlockSource &); // _ZN10BlockActor9onChangedER11BlockSource
    virtual bool isMovable(BlockSource &); // _ZN10BlockActor9isMovableER11BlockSource
    virtual bool isCustomNameSaved(); // _ZN10BlockActor17isCustomNameSavedEv
    virtual void getUpdatePacket(BlockSource &); // _ZN10BlockActor15getUpdatePacketER11BlockSource
    virtual void onPlace(BlockSource &); // _ZN10BlockActor7onPlaceER11BlockSource
    virtual void onMove(); // _ZN10BlockActor6onMoveEv
    virtual void onRemoved(BlockSource &); // _ZN10BlockActor9onRemovedER11BlockSource
    virtual void triggerEvent(int, int); // _ZN10BlockActor12triggerEventEii
    virtual void clearCache(); // _ZN10BlockActor10clearCacheEv
    virtual void onNeighborChanged(BlockSource &, BlockPos const&); // _ZN10BlockActor17onNeighborChangedER11BlockSourceRK8BlockPos
    virtual void getShadowRadius(BlockSource &)const; // _ZNK10BlockActor15getShadowRadiusER11BlockSource
    virtual bool hasAlphaLayer()const; // _ZNK10BlockActor13hasAlphaLayerEv
    virtual void getCrackEntity(BlockSource &, BlockPos const&); // _ZN10BlockActor14getCrackEntityER11BlockSourceRK8BlockPos
    virtual void getDebugText(std::vector<std::string> &, BlockPos const&); // _ZN10BlockActor12getDebugTextERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EERK8BlockPos
    virtual std::string getCustomName()const; // _ZNK10BlockActor13getCustomNameB5cxx11Ev
    virtual std::string getFilteredCustomName(UIProfanityContext const&); // _ZN10BlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext
    virtual std::string getName()const; // _ZNK10BlockActor7getNameB5cxx11Ev
    virtual std::string getImmersiveReaderText(BlockSource &); // _ZN10BlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource
    virtual void getRepairCost()const; // _ZNK10BlockActor13getRepairCostEv
    virtual void getOwningPiston(BlockSource &); // _ZN10BlockActor15getOwningPistonER11BlockSource
    virtual void getContainer(); // _ZN10BlockActor12getContainerEv
    virtual void getDeletionDelayTimeSeconds()const; // _ZNK10BlockActor27getDeletionDelayTimeSecondsEv
    virtual void onChunkLoaded(LevelChunk &); // _ZN10BlockActor13onChunkLoadedER10LevelChunk
    virtual void onChunkUnloaded(LevelChunk &); // _ZN10BlockActor15onChunkUnloadedER10LevelChunk
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN10BlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void _playerCanUpdate(Player const&)const; // _ZNK10BlockActor16_playerCanUpdateERK6Player
//  void setId(BlockActorType, std::string const&); //TODO: incomplete function definition // _ZN10BlockActor5setIdE14BlockActorTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initBlockEntities(); // _ZN10BlockActor17initBlockEntitiesEv
    void shutdown(); // _ZN10BlockActor8shutdownEv
//  BlockActor(BlockActorType, BlockPos const&, std::string const&); //TODO: incomplete function definition // _ZN10BlockActorC2E14BlockActorTypeRK8BlockPosRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _resetAABB(); // _ZN10BlockActor10_resetAABBEv
    void setCustomName(std::string const&); // _ZN10BlockActor13setCustomNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void assignBlockIfNotAssigned(BlockSource &); // _ZN10BlockActor24assignBlockIfNotAssignedER11BlockSource
    void loadStatic(Level &, CompoundTag const&, DataLoadHelper &); // _ZN10BlockActor10loadStaticER5LevelRK11CompoundTagR14DataLoadHelper
    void setChanged(); // _ZN10BlockActor10setChangedEv
    void setMovable(bool); // _ZN10BlockActor10setMovableEb
    void setCustomNameSaved(bool); // _ZN10BlockActor18setCustomNameSavedEb
    void distanceToSqr(Vec3 const&); // _ZN10BlockActor13distanceToSqrERK4Vec3
    void onUpdatePacket(CompoundTag const&, BlockSource &, Player const*); // _ZN10BlockActor14onUpdatePacketERK11CompoundTagR11BlockSourcePK6Player
//  bool isType(BlockActorType)const; //TODO: incomplete function definition // _ZNK10BlockActor6isTypeE14BlockActorType
//  bool isType(BlockActor &, BlockActorType); //TODO: incomplete function definition // _ZN10BlockActor6isTypeERS_14BlockActorType
    bool isInWorld()const; // _ZNK10BlockActor9isInWorldEv
    void stopDestroy(); // _ZN10BlockActor11stopDestroyEv
    void getAABB()const; // _ZNK10BlockActor7getAABBEv
    void setBB(AABB); // _ZN10BlockActor5setBBE4AABB
    void getPosition()const; // _ZNK10BlockActor11getPositionEv
    void moveTo(BlockPos const&); // _ZN10BlockActor6moveToERK8BlockPos
    void getType()const; // _ZNK10BlockActor7getTypeEv
    bool isClientSideOnly()const; // _ZNK10BlockActor16isClientSideOnlyEv
    void setClientSideOnly(bool); // _ZN10BlockActor17setClientSideOnlyEb
    void getRendererId()const; // _ZNK10BlockActor13getRendererIdEv
//  void setRendererId(BlockActorRendererId); //TODO: incomplete function definition // _ZN10BlockActor13setRendererIdE20BlockActorRendererId
    bool canRenderCustomName()const; // _ZNK10BlockActor19canRenderCustomNameEv
    std::string getDisplayName()const; // _ZNK10BlockActor14getDisplayNameB5cxx11Ev
    void getBlock()const; // _ZNK10BlockActor8getBlockEv
    void getEntityTerrainInterlockData(); // _ZN10BlockActor29getEntityTerrainInterlockDataEv
    void getEntityTerrainInterlockDataConst()const; // _ZNK10BlockActor34getEntityTerrainInterlockDataConstEv
};
