#pragma once

class LiquidBlockStatic : LiquidBlock {

public:
    virtual ~LiquidBlockStatic();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;

    void LiquidBlockStatic(std::string const&, int, Material const&);
    void _setDynamic(BlockSource &, BlockPos const&)const;
    void _isFlammable(BlockSource &, BlockPos const&);
};
