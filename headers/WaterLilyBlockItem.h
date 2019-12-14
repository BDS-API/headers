#pragma once

class WaterLilyBlockItem : BlockItem {

public:
    virtual ~WaterLilyBlockItem();
    virtual bool isLiquidClipItem(int)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void WaterLilyBlockItem(std::string const&, int);
};
