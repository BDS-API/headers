#pragma once

class PistonBlockActor : BlockActor {

    virtual void Piston~PistonBlockActor();
    virtual void Piston~PistonBlockActor();
    virtual void Pistonload(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void Pistonsave(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void Pistontick(BlockSource &);
    virtual void isFinished(void);
    virtual void onChanged(BlockSource &);
    virtual void isMovable(BlockSource &);
    virtual void isCustomNameSaved(void);
    virtual void PistongetUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void PistononUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onMove(void);
    virtual void PistononRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void hasAlphaLayer(void)const;
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &, BlockPos const&);
    virtual void _ZNK10BlockActor13getCustomNameB5cxx11Ev;
    virtual void _ZN10BlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext;
    virtual void _ZNK10BlockActor7getNameB5cxx11Ev;
    virtual void _ZN10BlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource;
    virtual void getRepairCost(void)const;
    virtual void PistongetOwningPiston(BlockSource &);
    virtual void getContainer(void);
    virtual void PistongetDeletionDelayTimeSeconds(void)const;
    virtual void onChunkLoaded(LevelChunk &);
    virtual void onChunkUnloaded(LevelChunk &);
}
