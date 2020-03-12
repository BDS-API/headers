#pragma once

#include <memory>
#include <string>
#include "BlockItem.h"


class LeafBlockItem : BlockItem {

public:
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    ~LeafBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    LeafBlockItem(std::string const&, int, Block const*);
};
