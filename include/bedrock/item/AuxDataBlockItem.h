#pragma once

#include "./BlockItem.h"
#include <string>
#include <memory>
#include "unmapped/ItemDescriptor.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"


class AuxDataBlockItem : BlockItem {

public:
    virtual ~AuxDataBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;

    AuxDataBlockItem(std::string const&, int, Block const*);
};
