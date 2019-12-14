#pragma once

class SlimeBlock : BlockLegacy {

public:
    virtual ~SlimeBlock();
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual bool isBounceBlock(void)const;
    virtual void getExtraRenderLayers(void)const;

    void SlimeBlock(std::string const&, int, Material const&);
};
