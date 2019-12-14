#pragma once

class BookshelfBlock : BlockLegacy {

public:
    virtual ~BookshelfBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    void BookshelfBlock(std::string const&, int);
};
