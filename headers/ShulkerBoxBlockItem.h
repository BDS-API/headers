#pragma once

class ShulkerBoxBlockItem : AuxDataBlockItem {

public:
    virtual ~ShulkerBoxBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual void appendFormattedHovertext(ItemStackBase const&, Level &, std::string &, bool)const;

    void ShulkerBoxBlockItem(std::string const&, int, Block const*);
};
