#pragma once

class RailBlock : BaseRailBlock {

public:
    virtual RailBlock::~RailBlock();
    virtual void getVariant(Block const&)const;

    RailBlock(std::string const&, int);
};
