#pragma once

class HoneycombBlock : BlockLegacy {

public:
    virtual ~HoneycombBlock();

    void HoneycombBlock(std::string const&, int, Material const&);
};
