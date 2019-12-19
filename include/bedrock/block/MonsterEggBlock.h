#pragma once

class MonsterEggBlock : BlockLegacy {

public:
    virtual MonsterEggBlock::~MonsterEggBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    MonsterEggBlock(std::string const&, int);
    void getHostBlock(Block const&);
    bool isCompatibleHostBlock(Block const&);
    void getMonsterEggStoneTypeForHostBlock(Block const&);
};
