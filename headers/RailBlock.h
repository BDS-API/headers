#pragma once

class RailBlock : BaseRailBlock {

public:
    virtual ~RailBlock();
    virtual void getVariant(Block const&)const;

    void RailBlock(std::string const&, int);
};
