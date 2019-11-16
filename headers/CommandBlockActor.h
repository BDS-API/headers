#pragma once

class CommandBlockActor : BlockActor {

    virtual void Command~CommandBlockActor();
    virtual void Command~CommandBlockActor();
    virtual void Commandload(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void Commandsave(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void CommandsaveBlockData(CompoundTag &, BlockSource &)const;
    virtual void CommandloadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void CommandonCustomTagLoadDone(BlockSource &);
    virtual void tick(BlockSource &);
    virtual void isFinished(void);
    virtual void CommandonChanged(BlockSource &);
    virtual void isMovable(BlockSource &);
    virtual void isCustomNameSaved(void);
    virtual void CommandgetUpdatePacket(BlockSource &);
    virtual void CommandonPlace(BlockSource &);
    virtual void CommandonUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove(void);
    virtual void onRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void hasAlphaLayer(void)const;
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, BlockPos const&);
    virtual void _ZNK17CommandBlockActor13getCustomNameB5cxx11Ev;
    virtual void _ZN17CommandBlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext;
    virtual void _ZNK10BlockActor7getNameB5cxx11Ev;
    virtual void _ZN10BlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource;
    virtual void getRepairCost(void)const;
    virtual void getOwningPiston(BlockSource &);
    virtual void getContainer(void);
    virtual void getDeletionDelayTimeSeconds(void)const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
}
