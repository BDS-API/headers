#pragma once

class BlockActor {

public:
    virtual ~BlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void tick(BlockSource &);
    virtual bool isFinished(void);
    virtual void onChanged(BlockSource &);
    virtual bool isMovable(BlockSource &);
    virtual bool isCustomNameSaved(void);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove(void);
    virtual void onRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getShadowRadius(BlockSource &)const;
    virtual bool hasAlphaLayer(void)const;
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, BlockPos const&);
    virtual void getRepairCost(void)const;
    virtual void getOwningPiston(BlockSource &);
    virtual void getContainer(void);
    virtual void getDeletionDelayTimeSeconds(void)const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);

    void setId(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void initBlockEntities(void);
    void shutdown(void);
    void BlockActor(BlockActorType, BlockPos const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _resetAABB(void);
    void setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void assignBlockIfNotAssigned(BlockSource &);
    void loadStatic(Level &, CompoundTag const&, DataLoadHelper &);
    void setChanged(void);
    void setMovable(bool);
    void setCustomNameSaved(bool);
    void distanceToSqr(Vec3 const&);
    bool isType(BlockActorType)const;
    bool isType(BlockActor&, BlockActorType);
    bool isInWorld(void)const;
    void stopDestroy(void);
    void getAABB(void)const;
    void setBB(AABB);
    void getPosition(void)const;
    void moveTo(BlockPos const&);
    void getType(void)const;
    bool isClientSideOnly(void)const;
    void setClientSideOnly(bool);
    void getRendererId(void)const;
    void setRendererId(BlockActorRendererId);
    bool canRenderCustomName(void)const;
    void getBlock(void)const;
    void getEntityTerrainInterlockData(void);
    void getEntityTerrainInterlockDataConst(void)const;
};
