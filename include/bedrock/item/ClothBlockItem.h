#pragma once

#include <string>
#include "BlockItem.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include <memory>
#include "unmapped/ItemDescriptor.h"


class ClothBlockItem : BlockItem {

public:
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~ClothBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    ClothBlockItem(std::string const&, int, Block const*);
};
