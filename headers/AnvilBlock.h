#pragma once

class AnvilBlock : HeavyBlock {

public:
    virtual ~AnvilBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual bool isCraftingBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void breaksFallingBlocks(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName[abi:cxx11](Block const&)const;
    virtual void falling(void)const;
    virtual void onLand(BlockSource &, BlockPos const&)const;

    void AnvilBlock(std::string const&, int);
    bool isCubeShaped(void);
    bool isSolidRender(void)const;
};
