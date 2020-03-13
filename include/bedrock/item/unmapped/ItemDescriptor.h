#pragma once

#include <string>


class ItemDescriptor {

public:
    ~ItemDescriptor(); // _ZN14ItemDescriptorD2Ev
    ItemDescriptor(ItemDescriptor const&); // _ZN14ItemDescriptorC2ERKS_
    ItemDescriptor(ItemDescriptor &&); // _ZN14ItemDescriptorC2EOS_
    ItemDescriptor(); // _ZN14ItemDescriptorC2Ev
    ItemDescriptor(Block const&); // _ZN14ItemDescriptorC2ERK5Block
    ItemDescriptor(BlockLegacy const&); // _ZN14ItemDescriptorC2ERK11BlockLegacy
    ItemDescriptor(Item const&, int); // _ZN14ItemDescriptorC2ERK4Itemi
    ItemDescriptor(int, int); // _ZN14ItemDescriptorC2Eii
    void setAuxValue(short); // _ZN14ItemDescriptor11setAuxValueEs
    void getItem()const; // _ZNK14ItemDescriptor7getItemEv
    void getBlock()const; // _ZNK14ItemDescriptor8getBlockEv
    bool isValid()const; // _ZNK14ItemDescriptor7isValidEv
    bool isNull()const; // _ZNK14ItemDescriptor6isNullEv
    void getId()const; // _ZNK14ItemDescriptor5getIdEv
    void getAuxValue()const; // _ZNK14ItemDescriptor11getAuxValueEv
    void getIdAux()const; // _ZNK14ItemDescriptor8getIdAuxEv
    void sameItem(ItemDescriptor const&)const; // _ZNK14ItemDescriptor8sameItemERKS_
    void sameItemAndAux(ItemDescriptor const&)const; // _ZNK14ItemDescriptor14sameItemAndAuxERKS_
    void sameItemAndAux(ItemStack const&)const; // _ZNK14ItemDescriptor14sameItemAndAuxERK9ItemStack
    void operator==(ItemDescriptor const&)const; // _ZNK14ItemDescriptoreqERKS_
    std::string getRawNameId()const; // _ZNK14ItemDescriptor12getRawNameIdB5cxx11Ev
    void getLegacyBlock()const; // _ZNK14ItemDescriptor14getLegacyBlockEv
};
