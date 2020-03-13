#pragma once

#include "../../util/Tick.h"
#include <functional>


class BlockTickingQueue {

public:
    class BlockTick;
    class HashBlockTick;
    class TickDataSet;

//  BlockTickingQueue(TickingQueueType); //TODO: incomplete function definition // _ZN17BlockTickingQueueC2E16TickingQueueType
    ~BlockTickingQueue(); // _ZN17BlockTickingQueueD2Ev
//  BlockTickingQueue(Tick, TickingQueueType); //TODO: incomplete function definition // _ZN17BlockTickingQueueC2E4Tick16TickingQueueType
    void setOwningChunk(LevelChunk *); // _ZN17BlockTickingQueue14setOwningChunkEP10LevelChunk
    void add(BlockSource &, BlockPos const&, Block const&, int, int); // _ZN17BlockTickingQueue3addER11BlockSourceRK8BlockPosRK5Blockii
    void _onQueueChanged()const; // _ZNK17BlockTickingQueue15_onQueueChangedEv
    void remove(BlockPos const&, Block const&); // _ZN17BlockTickingQueue6removeERK8BlockPosRK5Block
    void remove(std::function<bool (TickNextTickData const&)> &&); // _ZN17BlockTickingQueue6removeEOSt8functionIFbRK16TickNextTickDataEE
    void tickPendingTicks(BlockSource &, Tick const&, int, bool); // _ZN17BlockTickingQueue16tickPendingTicksER11BlockSourceRK4Tickib
    void tickAllPendingTicks(BlockSource &); // _ZN17BlockTickingQueue19tickAllPendingTicksER11BlockSource
    bool isInstaticking()const; // _ZNK17BlockTickingQueue14isInstatickingEv
    bool isEmpty()const; // _ZNK17BlockTickingQueue7isEmptyEv
    bool hasTickInCurrentTick(BlockPos const&)const; // _ZNK17BlockTickingQueue20hasTickInCurrentTickERK8BlockPos
    bool hasTickInPendingTicks(BlockPos const&)const; // _ZNK17BlockTickingQueue21hasTickInPendingTicksERK8BlockPos
    void load(CompoundTag const&, BlockPalette const&); // _ZN17BlockTickingQueue4loadERK11CompoundTagRK12BlockPalette
    void save(CompoundTag &)const; // _ZNK17BlockTickingQueue4saveER11CompoundTag
    void _saveQueue(ListTag &, BlockTickingQueue::TickDataSet const&)const; // _ZNK17BlockTickingQueue10_saveQueueER7ListTagRKNS_11TickDataSetE
    void getTickDelaysInArea(BoundingBox const&)const; // _ZNK17BlockTickingQueue19getTickDelaysInAreaERK11BoundingBox
    bool ticksFromNow(int)const; // _ZNK17BlockTickingQueue12ticksFromNowEi
    void getNextUpdateForPos(BlockPos const&, Tick &)const; // _ZNK17BlockTickingQueue19getNextUpdateForPosERK8BlockPosR4Tick
    void eliminateDuplicatesOf(BlockLegacy const&); // _ZN17BlockTickingQueue21eliminateDuplicatesOfERK11BlockLegacy
//  BlockTickingQueue(LevelChunk &, TickingQueueType); //TODO: incomplete function definition // _ZN17BlockTickingQueueC2ER10LevelChunk16TickingQueueType
    class BlockTick {

    public:
        BlockTick(BlockPos const&, Block const&, Tick const&, int); // _ZN17BlockTickingQueue9BlockTickC2ERK8BlockPosRK5BlockRK4Ticki
        void operator==(BlockTickingQueue::BlockTick const&)const; // _ZNK17BlockTickingQueue9BlockTickeqERKS0_
        void operator<(BlockTickingQueue::BlockTick const&)const; // _ZNK17BlockTickingQueue9BlockTickltERKS0_
        void operator>(BlockTickingQueue::BlockTick const&)const; // _ZNK17BlockTickingQueue9BlockTickgtERKS0_
        BlockTick(BlockTickingQueue::BlockTick const&); // _ZN17BlockTickingQueue9BlockTickC2ERKS0_
        BlockTick(BlockTickingQueue::BlockTick &&); // _ZN17BlockTickingQueue9BlockTickC2EOS0_
    };
    class HashBlockTick {

    public:
        void operator()(BlockTickingQueue::BlockTick const&)const; // _ZNK17BlockTickingQueue13HashBlockTickclERKNS_9BlockTickE
    };
    class TickDataSet {

    public:
        TickDataSet(); // _ZN17BlockTickingQueue11TickDataSetC2Ev
        ~TickDataSet(); // _ZN17BlockTickingQueue11TickDataSetD2Ev
        void remove(BlockPos const&, Block const&); // _ZN17BlockTickingQueue11TickDataSet6removeERK8BlockPosRK5Block
        void remove(std::function<bool (TickNextTickData const&)> &&); // _ZN17BlockTickingQueue11TickDataSet6removeEOSt8functionIFbRK16TickNextTickDataEE
    };
};
