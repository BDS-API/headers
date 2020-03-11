#pragma once

#include "./BlockItem.h"
#include <memory>
#include "unmapped/ItemDescriptor.h"
#include "../nbt/CompoundTag.h"
#include <string>


class SaplingBlockItem : BlockItem {

public:
    virtual ~SaplingBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

    SaplingBlockItem(std::string const&, int);
};
