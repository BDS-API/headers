#pragma once

#include "../../block/BlockLegacy.h"
#include "../../../unmapped/Block.h"
#include "ItemDescriptor.h"
#include "../Item.h"


class ItemDescriptorCount {

public:
    void setStackSize(short);
    ItemDescriptorCount(Item const&, int, unsigned short);
    void getStackSize()const;
    ItemDescriptorCount(BlockLegacy const&, unsigned short);
    ItemDescriptorCount(ItemDescriptorCount const&);
    ItemDescriptorCount(ItemDescriptorCount &&);
    ItemDescriptorCount(ItemDescriptor const&, unsigned short);
    ~ItemDescriptorCount();
    ItemDescriptorCount(Block const&, unsigned short);
    ItemDescriptorCount();
};
