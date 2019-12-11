#pragma once

class UnderwaterTorchBlock : TorchBlock {

public:
    virtual ~UnderwaterTorchBlock();
    virtual bool isWaterBlocking(void)const;
    virtual bool canContainLiquid(void)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void UnderwaterTorchBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
