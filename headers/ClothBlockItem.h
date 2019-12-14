#pragma once

class ClothBlockItem : BlockItem {

public:
    virtual ~ClothBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void ClothBlockItem(std::string const&, int, Block const*);
};
