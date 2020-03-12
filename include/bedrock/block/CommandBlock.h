#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "actor/CommandBlockActor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../util/Random.h"


class CommandBlock : ActorBlock {

public:
    static long mCBModeMap;

    virtual void getVariant(Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool hasComparatorSignal()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual bool isInteractiveBlock()const;
    ~CommandBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
//  void updateBlock(BlockSource &, BlockPos const&, CommandBlockMode, bool)const; //TODO: incomplete function definition
    void getMode()const;
    void _execute(BlockSource &, CommandBlockActor &, BlockPos const&, bool)const;
    void _executeChainBlock(BlockSource &, BlockPos const&, CommandBlockActor &, bool)const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    bool isCommandBlockType(Block const&)const;
    void _getCommandBlockActor(BlockSource &, BlockPos const&)const;
//  CommandBlock(std::string const&, int, CommandBlockMode); //TODO: incomplete function definition
    void _executeChain(BlockSource &, BlockPos const&)const;
};
