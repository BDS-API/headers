#pragma once

class ItemDescriptorCount {

public:

    ItemDescriptorCount(ItemDescriptorCount const&);
    ItemDescriptorCount(ItemDescriptorCount&&);
    ItemDescriptorCount(void);
    ItemDescriptorCount(ItemDescriptor const&, unsigned short);
    ItemDescriptorCount(Block const&, unsigned short);
    ItemDescriptorCount(BlockLegacy const&, unsigned short);
    ItemDescriptorCount(Item const&, int, unsigned short);
    void getStackSize(void)const;
    void setStackSize(short);
};
