#pragma once

class MonsterEggBlock : BlockLegacy {

public:
    virtual ~MonsterEggBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void MonsterEggBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void getHostBlock(Block const&);
    bool isCompatibleHostBlock(Block const&);
    void getMonsterEggStoneTypeForHostBlock(Block const&);
};
