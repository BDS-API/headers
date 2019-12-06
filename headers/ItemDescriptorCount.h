#pragma once

class ItemDescriptorCount {

public:

    void ItemDescriptorCount(ItemDescriptorCount const&);
    void ItemDescriptorCount(ItemDescriptorCount&&);
    void ItemDescriptorCount(void);
    void ItemDescriptorCount(ItemDescriptor const&, unsigned short);
    void ItemDescriptorCount(Block const&, unsigned short);
    void ItemDescriptorCount(BlockLegacy const&, unsigned short);
    void ItemDescriptorCount(Item const&, int, unsigned short);
    void getStackSize(void)const;
    void setStackSize(short);
};
