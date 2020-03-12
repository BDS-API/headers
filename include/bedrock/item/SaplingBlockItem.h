#pragma once

#include <string>
#include "BlockItem.h"
#include "../nbt/CompoundTag.h"
#include <memory>
#include "unmapped/ItemDescriptor.h"


class SaplingBlockItem : BlockItem {

public:
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~SaplingBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    SaplingBlockItem(std::string const&, int);
};
