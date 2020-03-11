#pragma once

#include "../../../unmapped/Block.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockSource.h"
#include "../../level/LevelChunk.h"
#include "../../../unmapped/TickNextTickData.h"
#include "../BlockLegacy.h"
#include "../../util/BlockPos.h"
#include "../../nbt/ListTag.h"
#include "./BlockPalette.h"
#include "../../util/Tick.h"
#include "../../../unmapped/BoundingBox.h"
#include "../../../unmapped/TickDataSet.h"
#include <functional>


class BlockTickingQueue {

public:

//  BlockTickingQueue(TickingQueueType); //TODO: incomplete function definition
    ~BlockTickingQueue();
//  BlockTickingQueue(Tick, TickingQueueType); //TODO: incomplete function definition
    void setOwningChunk(LevelChunk *);
    void add(BlockSource &, BlockPos const&, Block const&, int, int);
    void _onQueueChanged()const;
    void remove(BlockPos const&, Block const&);
    void remove(std::function<bool (TickNextTickData const&)> &&);
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
//  BlockTickingQueue(LevelChunk &, TickingQueueType); //TODO: incomplete function definition
};
