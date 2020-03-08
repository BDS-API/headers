#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/Vec3"
#include "actor/CommandBlockActor"


class CommandBlock : ActorBlock {

public:
    static long mCBModeMap;

    virtual CommandBlock::~CommandBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isInteractiveBlock()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    CommandBlock(std::string const&, int, CommandBlockMode);
    void updateBlock(BlockSource &, BlockPos const&, CommandBlockMode, bool)const;
    void getMode()const;
    bool isCommandBlockType(Block const&)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    void _getCommandBlockActor(BlockSource &, BlockPos const&)const;
    void _execute(BlockSource &, CommandBlockActor &, BlockPos const&, bool)const;
    void _executeChainBlock(BlockSource &, BlockPos const&, CommandBlockActor &, bool)const;
    void _executeChain(BlockSource &, BlockPos const&)const;
};
