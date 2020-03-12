#pragma once

#include <memory>
#include <string>
#include "BlockItem.h"


class ClothBlockItem : BlockItem {

public:
    virtual void getLevelDataForAuxValue(int)const;
    ~ClothBlockItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ClothBlockItem(std::string const&, int, Block const*);
};
