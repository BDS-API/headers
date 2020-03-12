#pragma once

#include <string>
#include "TorchBlock.h"


class ColoredTorchBlock : TorchBlock {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    ~ColoredTorchBlock();
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    void _getColor(Block const&)const;
//  void getItemForColor(ColoredTorchColor); //TODO: incomplete function definition
//  ColoredTorchBlock(std::string const&, int, ColoredTorchColor); //TODO: incomplete function definition
};
