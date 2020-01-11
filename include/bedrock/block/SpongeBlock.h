#pragma once

class SpongeBlock : BlockLegacy {

public:
    virtual SpongeBlock::~SpongeBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    SpongeBlock(std::string const&, int, Material const&);
    void _evaporateWater(BlockSource &, BlockPos const&)const;
    void _setShouldDry(BlockSource &, BlockPos const&)const;
    void _attemptAbsorbWater(BlockSource &, BlockPos const&)const;
    void _performAbsorbWater(BlockSource &, BlockPos const&)const;
    void _spawnAbsorbParticles(BlockSource &, BlockPos const&)const;
};