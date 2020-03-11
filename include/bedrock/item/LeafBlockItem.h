#pragma once

#include "./BlockItem.h"
#include <string>
#include "./ItemStackBase.h"
#include <memory>
#include "../level/Level.h"
#include "unmapped/ItemDescriptor.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"


class LeafBlockItem : BlockItem {

public:
    virtual ~LeafBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void fixupOnLoad(ItemStackBase &)const;
    virtual void fixupOnLoad(ItemStackBase &, Level &)const;

    LeafBlockItem(std::string const&, int, Block const*);
};
