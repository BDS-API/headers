#pragma once

class MelonBlock : BlockLegacy {

public:
    virtual ~MelonBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;

    void MelonBlock(std::string const&, int);
};
