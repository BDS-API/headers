#pragma once

class SlabBlock : BlockLegacy {

public:
    virtual SlabBlock::~SlabBlock();
    virtual bool isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& ()(BlockPos const&)> const&, BlockPos const&)const;
    virtual bool isSlabBlock(void)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getExplosionResistance(Actor *)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched(void)const;

    SlabBlock(std::string const&, int, bool, Material const&, WeakPtr<BlockLegacy>);
    void getBaseSlab(void)const;
};
