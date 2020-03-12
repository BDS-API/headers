#pragma once

#include "../BlockLegacy.h"
#include "../../../unmapped/Block.h"
#include "../../level/LevelChunk.h"
#include "../../nbt/CompoundTag.h"
#include "../../nbt/ListTag.h"
#include <functional>
#include "../../../unmapped/BoundingBox.h"
#include "../../util/Tick.h"
#include "BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/TickNextTickData.h"
#include "BlockPalette.h"


class BlockTickingQueue {

public:
    class BlockTick;
    class HashBlockTick;
    class TickDataSet;

    void remove(std::function<bool (TickNextTickData const&)> &&);
//  BlockTickingQueue(Tick, TickingQueueType); //TODO: incomplete function definition
    void load(CompoundTag const&, BlockPalette const&);
    bool isInstaticking()const;
    void tickPendingTicks(BlockSource &, Tick const&, int, bool);
    void _onQueueChanged()const;
    void eliminateDuplicatesOf(BlockLegacy const&);
    void setOwningChunk(LevelChunk *);
//  BlockTickingQueue(TickingQueueType); //TODO: incomplete function definition
    void tickAllPendingTicks(BlockSource &);
    void getNextUpdateForPos(BlockPos const&, Tick &)const;
    bool hasTickInCurrentTick(BlockPos const&)const;
    void add(BlockSource &, BlockPos const&, Block const&, int, int);
    bool hasTickInPendingTicks(BlockPos const&)const;
    void remove(BlockPos const&, Block const&);
    ~BlockTickingQueue();
    void getTickDelaysInArea(BoundingBox const&)const;
//  BlockTickingQueue(LevelChunk &, TickingQueueType); //TODO: incomplete function definition
    void _saveQueue(ListTag &, BlockTickingQueue::TickDataSet const&)const;
    bool ticksFromNow(int)const;
    void save(CompoundTag &)const;
    bool isEmpty()const;
    class BlockTick {

    public:
        void operator<(BlockTickingQueue::BlockTick const&)const;
        BlockTick(BlockPos const&, Block const&, Tick const&, int);
        void operator>(BlockTickingQueue::BlockTick const&)const;
        void operator==(BlockTickingQueue::BlockTick const&)const;
        BlockTick(BlockTickingQueue::BlockTick const&);
        BlockTick(BlockTickingQueue::BlockTick &&);
    };
    namespace HashBlockTick {

        void operator()(BlockTickingQueue::BlockTick const&)const;
    };
    class TickDataSet {

    public:
        ~TickDataSet();
        void remove(BlockPos const&, Block const&);
        TickDataSet();
        void remove(std::function<bool (TickNextTickData const&)> &&);
    };
};
