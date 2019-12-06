#pragma once

class MobSpawnerBlock : ActorBlock {

public:
    virtual ~MobSpawnerBlock();
    virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual bool isInteractiveBlock(void)const;
    virtual bool canContainLiquid(void)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;

    void MobSpawnerBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
