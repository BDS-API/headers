#pragma once

#include "../../../unmapped/Block.h"
#include "./ItemDescriptor.h"
#include "../Item.h"
#include "./ItemDescriptorCount.h"
#include "../../block/BlockLegacy.h"


class ItemDescriptorCount {

public:

    ~ItemDescriptorCount();
    ItemDescriptorCount(ItemDescriptorCount const&);
    ItemDescriptorCount(ItemDescriptorCount &&);
    ItemDescriptorCount();
    ItemDescriptorCount(ItemDescriptor const&, unsigned short);
    ItemDescriptorCount(Block const&, unsigned short);
    ItemDescriptorCount(BlockLegacy const&, unsigned short);
    ItemDescriptorCount(Item const&, int, unsigned short);
    void getStackSize()const;
    void setStackSize(short);
};
