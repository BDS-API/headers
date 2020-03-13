#pragma once



class ItemDescriptorCount {

public:
    ~ItemDescriptorCount(); // _ZN19ItemDescriptorCountD2Ev
    ItemDescriptorCount(ItemDescriptorCount const&); // _ZN19ItemDescriptorCountC2ERKS_
    ItemDescriptorCount(ItemDescriptorCount &&); // _ZN19ItemDescriptorCountC2EOS_
    ItemDescriptorCount(); // _ZN19ItemDescriptorCountC2Ev
    ItemDescriptorCount(ItemDescriptor const&, unsigned short); // _ZN19ItemDescriptorCountC2ERK14ItemDescriptort
    ItemDescriptorCount(Block const&, unsigned short); // _ZN19ItemDescriptorCountC2ERK5Blockt
    ItemDescriptorCount(BlockLegacy const&, unsigned short); // _ZN19ItemDescriptorCountC2ERK11BlockLegacyt
    ItemDescriptorCount(Item const&, int, unsigned short); // _ZN19ItemDescriptorCountC2ERK4Itemit
    void getStackSize()const; // _ZNK19ItemDescriptorCount12getStackSizeEv
    void setStackSize(short); // _ZN19ItemDescriptorCount12setStackSizeEs
};
