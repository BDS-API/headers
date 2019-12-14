#pragma once

class LeafBlockItem : BlockItem {

public:
    virtual ~LeafBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void LeafBlockItem(std::string const&, int, Block const*);
};
