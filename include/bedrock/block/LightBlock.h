#pragma once

class LightBlock : AirBlock {

public:
    virtual LightBlock::~LightBlock();
    virtual void getLightEmission(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void init(void);

    LightBlock(std::string const&, int, Material const&);
};
