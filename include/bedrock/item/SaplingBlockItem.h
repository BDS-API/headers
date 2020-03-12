#pragma once

#include <memory>
#include <string>
#include "BlockItem.h"


class SaplingBlockItem : BlockItem {

public:
    ~SaplingBlockItem();
    virtual void getLevelDataForAuxValue(int)const;
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    SaplingBlockItem(std::string const&, int);
};
