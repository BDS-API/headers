#pragma once

#include <string>


class ItemDescriptor {

public:
    ItemDescriptor(Item const&, int);
    ItemDescriptor(ItemDescriptor const&);
    void sameItemAndAux(ItemDescriptor const&)const;
    bool isValid()const;
    void sameItemAndAux(ItemStack const&)const;
    void getLegacyBlock()const;
    ItemDescriptor(int, int);
    void getAuxValue()const;
    void setAuxValue(short);
    std::string getRawNameId()const;
    void getId()const;
    void operator==(ItemDescriptor const&)const;
    ~ItemDescriptor();
    ItemDescriptor(ItemDescriptor &&);
    ItemDescriptor();
    ItemDescriptor(Block const&);
    bool isNull()const;
    void getBlock()const;
    void getIdAux()const;
    void getItem()const;
    void sameItem(ItemDescriptor const&)const;
    ItemDescriptor(BlockLegacy const&);
};
