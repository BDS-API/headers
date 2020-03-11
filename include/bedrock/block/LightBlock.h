#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../actor/unmapped/ActorBlockSyncMessage.h"
#include "./AirBlock.h"
#include "../../unmapped/Block.h"


class LightBlock : AirBlock {

public:
    virtual ~LightBlock();
    virtual void getLightEmission(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void init();

    LightBlock(std::string const&, int, Material const&);
};
