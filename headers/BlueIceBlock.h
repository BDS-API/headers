#pragma once

class BlueIceBlock : BlockLegacy {

public:
    virtual ~BlueIceBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;

    void BlueIceBlock(std::string const&, int);
};
