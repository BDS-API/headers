#pragma once

class SignItem : Item {

public:
    virtual ~SignItem();
    virtual void _calculatePlacePos(ItemStack &, Actor &, unsigned char &, BlockPos &)const;
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const;

    void SignItem(std::string const&, int, SignBlockActor::SignType);
};
