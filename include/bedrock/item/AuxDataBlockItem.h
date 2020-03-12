#pragma once

#include <string>
#include "BlockItem.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/Block.h"
#include <memory>
#include "unmapped/ItemDescriptor.h"


class AuxDataBlockItem : BlockItem {

public:
    virtual void getLevelDataForAuxValue(int)const;
    ~AuxDataBlockItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    AuxDataBlockItem(std::string const&, int, Block const*);
};
