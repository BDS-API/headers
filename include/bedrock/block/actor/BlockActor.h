#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../level/LevelChunk"
#include "../../../unmapped/UIProfanityContext"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../util/Vec3"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/AABB"


class BlockActor {

public:
    static long mIdClassMap[abi:cxx11];
    static long mClassIdMap[abi:cxx11];

    virtual BlockActor::~BlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void tick(BlockSource &);
    virtual bool isFinished();
    virtual void onChanged(BlockSource &);
    virtual bool isMovable(BlockSource &);
    virtual bool isCustomNameSaved();
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void onMove();
    virtual void onRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache();
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getShadowRadius(BlockSource &)const;
    virtual bool hasAlphaLayer()const;
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &, BlockPos const&);
    virtual void getCustomName()const;
    virtual void getFilteredCustomName(UIProfanityContext const&);
    virtual void getName()const;
    virtual void getImmersiveReaderText(BlockSource &);
    virtual void getRepairCost()const;
    virtual void getOwningPiston(BlockSource &);
    virtual void getContainer();
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void _playerCanUpdate(Player const&)const;

    void setId(BlockActorType, std::string const&);
    void initBlockEntities();
    void shutdown();
    BlockActor(BlockActorType, BlockPos const&, std::string const&);
    void _resetAABB();
    void setCustomName(std::string const&);
    void assignBlockIfNotAssigned(BlockSource &);
    void loadStatic(Level &, CompoundTag const&, DataLoadHelper &);
    void setChanged();
    void setMovable(bool);
    void setCustomNameSaved(bool);
    void distanceToSqr(Vec3 const&);
    void onUpdatePacket(CompoundTag const&, BlockSource &, Player const*);
    bool isType(BlockActorType)const;
    bool isType(BlockActor&, BlockActorType);
    bool isInWorld()const;
    void stopDestroy();
    void getAABB()const;
    void setBB(AABB);
    void getPosition()const;
    void moveTo(BlockPos const&);
    void getType()const;
    bool isClientSideOnly()const;
    void setClientSideOnly(bool);
    void getRendererId()const;
    void setRendererId(BlockActorRendererId);
    bool canRenderCustomName()const;
    void getBlock()const;
    void getEntityTerrainInterlockData();
    void getEntityTerrainInterlockDataConst()const;
};
