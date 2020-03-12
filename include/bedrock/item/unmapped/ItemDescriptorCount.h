#pragma once



class ItemDescriptorCount {

public:
    ItemDescriptorCount(Item const&, int, unsigned short);
    ItemDescriptorCount(ItemDescriptorCount &&);
    void getStackSize()const;
    ~ItemDescriptorCount();
    ItemDescriptorCount(Block const&, unsigned short);
    ItemDescriptorCount();
    ItemDescriptorCount(BlockLegacy const&, unsigned short);
    void setStackSize(short);
    ItemDescriptorCount(ItemDescriptor const&, unsigned short);
    ItemDescriptorCount(ItemDescriptorCount const&);
};
