#pragma once

#include "../../unmapped/BaseGameVersion"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class ColoredTorchBlock : TorchBlock {

public:
    ColoredTorchBlock::~ColoredTorchBlock()
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    ColoredTorchBlock(std::string const&, int, ColoredTorchColor);
    void _getColor(Block const&)const;
    void getItemForColor(ColoredTorchColor);
};
