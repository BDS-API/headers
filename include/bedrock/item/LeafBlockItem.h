#pragma once

#include <string>
#include "BlockItem.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include "ItemStackBase.h"
#include <memory>
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"


class LeafBlockItem : BlockItem {

public:
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;
    virtual void getLevelDataForAuxValue(int)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    ~LeafBlockItem();
    LeafBlockItem(std::string const&, int, Block const*);
};
