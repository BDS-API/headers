#pragma once

#include <string>
#include "../../util/AABB.h"
#include <vector>


class BlockActor {

public:
    static std::string mIdClassMap;
    static std::string mClassIdMap;

    virtual void getShadowRadius(BlockSource &)const;
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual bool isCustomNameSaved();
    virtual void save(CompoundTag &)const;
    virtual void getDebugText(std::vector<std::string> &, BlockPos const&);
    virtual std::string getCustomName()const;
    virtual void getOwningPiston(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void onMove();
    virtual std::string getFilteredCustomName(UIProfanityContext const&);
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual std::string getName()const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual bool isFinished();
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void getContainer();
    virtual void tick(BlockSource &);
    virtual bool isMovable(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    ~BlockActor();
    virtual void onRemoved(BlockSource &);
    virtual void getRepairCost()const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void clearCache();
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void triggerEvent(int, int);
    virtual void _playerCanUpdate(Player const&)const;
    virtual bool hasAlphaLayer()const;
    void setCustomNameSaved(bool);
    void distanceToSqr(Vec3 const&);
    void getEntityTerrainInterlockData();
    void getBlock()const;
//  bool isType(BlockActorType)const; //TODO: incomplete function definition
//  BlockActor(BlockActorType, BlockPos const&, std::string const&); //TODO: incomplete function definition
    void setChanged();
//  bool isType(BlockActor &, BlockActorType); //TODO: incomplete function definition
    void setClientSideOnly(bool);
    bool isInWorld()const;
    void getPosition()const;
    void onUpdatePacket(CompoundTag const&, BlockSource &, Player const*);
    void moveTo(BlockPos const&);
    std::string getDisplayName()const;
    void shutdown();
    void getAABB()const;
    void getType()const;
    void _resetAABB();
//  void setId(BlockActorType, std::string const&); //TODO: incomplete function definition
    void getEntityTerrainInterlockDataConst()const;
    void loadStatic(Level &, CompoundTag const&, DataLoadHelper &);
    void stopDestroy();
    void assignBlockIfNotAssigned(BlockSource &);
    bool isClientSideOnly()const;
    void initBlockEntities();
    void getRendererId()const;
    bool canRenderCustomName()const;
    void setCustomName(std::string const&);
    void setMovable(bool);
    void setBB(AABB);
//  void setRendererId(BlockActorRendererId); //TODO: incomplete function definition
};
