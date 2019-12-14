#pragma once

class UnderwaterTorchBlock : TorchBlock {

public:
    virtual ~UnderwaterTorchBlock();
    virtual bool isWaterBlocking(void)const;
    virtual bool canContainLiquid(void)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void UnderwaterTorchBlock(std::string const&, int);
};
