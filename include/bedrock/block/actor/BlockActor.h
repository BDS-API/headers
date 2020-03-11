#pragma once

#include "../../util/AABB.h"
#include <string>
#include "./BlockActor.h"
#include "../../nbt/CompoundTag.h"
#include "../../util/Vec3.h"
#include "../../level/LevelChunk.h"
#include <memory>
#include "../../../unmapped/UIProfanityContext.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include <vector>
#include "../unmapped/BlockSource.h"
#include "../../actor/Player.h"


class BlockActor {

public:
    static std::string mIdClassMap;
    static std::string mClassIdMap;

    virtual ~BlockActor();
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
    virtual std::string getCustomName()const;
    virtual std::string getFilteredCustomName(UIProfanityContext const&);
    virtual std::string getName()const;
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void getRepairCost()const;
    virtual void getOwningPiston(BlockSource &);
    virtual void getContainer();
    virtual void getDeletionDelayTimeSeconds()const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void _playerCanUpdate(Player const&)const;

//  void setId(BlockActorType, std::string const&); //TODO: incomplete function definition
    void initBlockEntities();
    void shutdown();
//  BlockActor(BlockActorType, BlockPos const&, std::string const&); //TODO: incomplete function definition
    void _resetAABB();
    void setCustomName(std::string const&);
    void assignBlockIfNotAssigned(BlockSource &);
    void loadStatic(Level &, CompoundTag const&, DataLoadHelper &);
    void setChanged();
    void setMovable(bool);
    void setCustomNameSaved(bool);
    void distanceToSqr(Vec3 const&);
    void onUpdatePacket(CompoundTag const&, BlockSource &, Player const*);
//  bool isType(BlockActorType)const; //TODO: incomplete function definition
//  bool isType(BlockActor &, BlockActorType); //TODO: incomplete function definition
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
//  void setRendererId(BlockActorRendererId); //TODO: incomplete function definition
    bool canRenderCustomName()const;
    std::string getDisplayName()const;
    void getBlock()const;
    void getEntityTerrainInterlockData();
    void getEntityTerrainInterlockDataConst()const;
};
