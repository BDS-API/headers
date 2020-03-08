#pragma once

#include "../../util/Tick"
#include "../../nbt/CompoundTag"
#include "../BlockLegacy"
#include "../../level/LevelChunk"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../nbt/ListTag"
#include "../../../unmapped/BoundingBox"


class BlockTickingQueue {

public:

    BlockTickingQueue(TickingQueueType);
    BlockTickingQueue(Tick, TickingQueueType);
    void setOwningChunk(LevelChunk *);
    void add(BlockSource &, BlockPos const&, Block const&, int, int);
    void _onQueueChanged()const;
    void remove(BlockPos const&, Block const&);
    void remove(std::function<bool ()(TickNextTickData const&)> &&);
    void tickPendingTicks(BlockSource &, Tick const&, int, bool);
    void tickAllPendingTicks(BlockSource &);
    bool isInstaticking()const;
    bool isEmpty()const;
    bool hasTickInCurrentTick(BlockPos const&)const;
    bool hasTickInPendingTicks(BlockPos const&)const;
    void load(CompoundTag const&, BlockPalette const&);
    void save(CompoundTag &)const;
    void _saveQueue(ListTag &, BlockTickingQueue::TickDataSet const&)const;
    void getTickDelaysInArea(BoundingBox const&)const;
    bool ticksFromNow(int)const;
    void getNextUpdateForPos(BlockPos const&, Tick &)const;
    void eliminateDuplicatesOf(BlockLegacy const&);
    BlockTickingQueue(LevelChunk &, TickingQueueType);
};
