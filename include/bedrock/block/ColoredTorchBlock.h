#pragma once

#include "../util/BlockPos.h"
#include <string>
#include "unmapped/BlockSource.h"
#include "../actor/Actor.h"
#include "TorchBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class ColoredTorchBlock : TorchBlock {

public:
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    ~ColoredTorchBlock();
    void _getColor(Block const&)const;
//  ColoredTorchBlock(std::string const&, int, ColoredTorchColor); //TODO: incomplete function definition
//  void getItemForColor(ColoredTorchColor); //TODO: incomplete function definition
};
