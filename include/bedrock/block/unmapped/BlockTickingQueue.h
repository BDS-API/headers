#pragma once

#include "../../util/Tick.h"
#include <functional>


class BlockTickingQueue {

public:
    class BlockTick;
    class HashBlockTick;
    class TickDataSet;

    void _saveQueue(ListTag &, BlockTickingQueue::TickDataSet const&)const;
    void getNextUpdateForPos(BlockPos const&, Tick &)const;
    void setOwningChunk(LevelChunk *);
    void save(CompoundTag &)const;
    void eliminateDuplicatesOf(BlockLegacy const&);
    bool hasTickInPendingTicks(BlockPos const&)const;
//  BlockTickingQueue(TickingQueueType); //TODO: incomplete function definition
    bool ticksFromNow(int)const;
    ~BlockTickingQueue();
    void tickAllPendingTicks(BlockSource &);
    bool isEmpty()const;
    void tickPendingTicks(BlockSource &, Tick const&, int, bool);
    void getTickDelaysInArea(BoundingBox const&)const;
//  BlockTickingQueue(LevelChunk &, TickingQueueType); //TODO: incomplete function definition
    void remove(std::function<bool (TickNextTickData const&)> &&);
    void load(CompoundTag const&, BlockPalette const&);
    void _onQueueChanged()const;
    void remove(BlockPos const&, Block const&);
//  BlockTickingQueue(Tick, TickingQueueType); //TODO: incomplete function definition
    bool isInstaticking()const;
    bool hasTickInCurrentTick(BlockPos const&)const;
    void add(BlockSource &, BlockPos const&, Block const&, int, int);
    class BlockTick {

    public:
        BlockTick(BlockTickingQueue::BlockTick const&);
        void operator>(BlockTickingQueue::BlockTick const&)const;
        void operator==(BlockTickingQueue::BlockTick const&)const;
        void operator<(BlockTickingQueue::BlockTick const&)const;
        BlockTick(BlockPos const&, Block const&, Tick const&, int);
        BlockTick(BlockTickingQueue::BlockTick &&);
    };
    class HashBlockTick {

    public:
        void operator()(BlockTickingQueue::BlockTick const&)const;
    };
    class TickDataSet {

    public:
        void remove(BlockPos const&, Block const&);
        TickDataSet();
        ~TickDataSet();
        void remove(std::function<bool (TickNextTickData const&)> &&);
    };
};
