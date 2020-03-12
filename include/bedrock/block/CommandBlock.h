#pragma once

#include <string>
#include "ActorBlock.h"


class CommandBlock : ActorBlock {

public:
    static long mCBModeMap;

    virtual void use(Player &, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~CommandBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool hasComparatorSignal()const;
    void _execute(BlockSource &, CommandBlockActor &, BlockPos const&, bool)const;
    void _executeChainBlock(BlockSource &, BlockPos const&, CommandBlockActor &, bool)const;
    void _getCommandBlockActor(BlockSource &, BlockPos const&)const;
//  CommandBlock(std::string const&, int, CommandBlockMode); //TODO: incomplete function definition
    void getMode()const;
    void _installCircuit(BlockSource &, BlockPos const&, bool)const;
    bool isCommandBlockType(Block const&)const;
//  void updateBlock(BlockSource &, BlockPos const&, CommandBlockMode, bool)const; //TODO: incomplete function definition
    void _executeChain(BlockSource &, BlockPos const&)const;
};
