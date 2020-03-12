#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class SpongeBlock : BlockLegacy {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isValidAuxValue(int)const;
    ~SpongeBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    void _performAbsorbWater(BlockSource &, BlockPos const&)const;
    void _evaporateWater(BlockSource &, BlockPos const&)const;
    void _spawnAbsorbParticles(BlockSource &, BlockPos const&)const;
    SpongeBlock(std::string const&, int, Material const&);
    void _setShouldDry(BlockSource &, BlockPos const&)const;
    void _attemptAbsorbWater(BlockSource &, BlockPos const&)const;
};
