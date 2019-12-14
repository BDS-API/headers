#pragma once

class ObsidianBlock : BlockLegacy {

public:
    virtual ~ObsidianBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void ObsidianBlock(std::string const&, int, bool);
    void poofParticles(BlockSource &, BlockPos const&)const;
};
