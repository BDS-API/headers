#pragma once

#include "../../util/AABB.h"
#include <string>
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/Vec3.h"
#include "../../level/Level.h"
#include "../../level/LevelChunk.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include <vector>
#include "../../util/BlockPos.h"
#include "../../../unmapped/UIProfanityContext.h"
#include "../../actor/Player.h"


class BlockActor {

public:
    static std::string mIdClassMap;
    static std::string mClassIdMap;

    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual bool isFinished();
    virtual void onRemoved(BlockSource &);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void _playerCanUpdate(Player const&)const;
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void onChunkUnloaded(LevelChunk &);
    virtual bool hasAlphaLayer()const;
    virtual bool isCustomNameSaved();
    virtual void onChanged(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual bool isMovable(BlockSource &);
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void getOwningPiston(BlockSource &);
    virtual void triggerEvent(int, int);
    ~BlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void getDebugText(std::vector<std::string> &, BlockPos const&);
    virtual void tick(BlockSource &);
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual std::string getName()const;
    virtual void clearCache();
    virtual void getContainer();
    virtual void onMove();
    virtual std::string getFilteredCustomName(UIProfanityContext const&);
    virtual void getRepairCost()const;
    virtual void onPlace(BlockSource &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual std::string getCustomName()const;
    virtual void save(CompoundTag &)const;
    void moveTo(BlockPos const&);
    void assignBlockIfNotAssigned(BlockSource &);
    void setChanged();
    void getType()const;
    bool canRenderCustomName()const;
    void stopDestroy();
    void onUpdatePacket(CompoundTag const&, BlockSource &, Player const*);
    std::string getDisplayName()const;
    void setMovable(bool);
    void shutdown();
    void setCustomNameSaved(bool);
//  BlockActor(BlockActorType, BlockPos const&, std::string const&); //TODO: incomplete function definition
    void setCustomName(std::string const&);
//  void setRendererId(BlockActorRendererId); //TODO: incomplete function definition
    void getPosition()const;
    bool isClientSideOnly()const;
//  bool isType(BlockActor &, BlockActorType); //TODO: incomplete function definition
    bool isInWorld()const;
    void getAABB()const;
    void getBlock()const;
    void distanceToSqr(Vec3 const&);
//  void setId(BlockActorType, std::string const&); //TODO: incomplete function definition
    void _resetAABB();
    void initBlockEntities();
    void getEntityTerrainInterlockDataConst()const;
    void getEntityTerrainInterlockData();
    void setBB(AABB);
    void loadStatic(Level &, CompoundTag const&, DataLoadHelper &);
    void setClientSideOnly(bool);
//  bool isType(BlockActorType)const; //TODO: incomplete function definition
    void getRendererId()const;
};
