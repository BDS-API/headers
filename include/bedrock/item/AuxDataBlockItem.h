#pragma once

#include <memory>
#include <string>
#include "BlockItem.h"


class AuxDataBlockItem : BlockItem {

public:
    ~AuxDataBlockItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    virtual void getLevelDataForAuxValue(int)const;
    AuxDataBlockItem(std::string const&, int, Block const*);
};
