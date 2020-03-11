#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./TorchBlock.h"
#include "../../unmapped/BaseGameVersion.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class ColoredTorchBlock : TorchBlock {

public:
    virtual ~ColoredTorchBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

//  ColoredTorchBlock(std::string const&, int, ColoredTorchColor); //TODO: incomplete function definition
    void _getColor(Block const&)const;
//  void getItemForColor(ColoredTorchColor); //TODO: incomplete function definition
};
