#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Material.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class SpongeBlock : BlockLegacy {

public:
    virtual ~SpongeBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    SpongeBlock(std::string const&, int, Material const&);
    void _evaporateWater(BlockSource &, BlockPos const&)const;
    void _setShouldDry(BlockSource &, BlockPos const&)const;
    void _attemptAbsorbWater(BlockSource &, BlockPos const&)const;
    void _performAbsorbWater(BlockSource &, BlockPos const&)const;
    void _spawnAbsorbParticles(BlockSource &, BlockPos const&)const;
};
