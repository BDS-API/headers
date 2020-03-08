#pragma once

#include "../../block/BlockLegacy"
#include "../Item"
#include "../../../unmapped/Block"
#include "../ItemStack"


class ItemDescriptor {

public:

    ItemDescriptor(ItemDescriptor const&);
    ItemDescriptor(ItemDescriptor&&);
    ItemDescriptor(void);
    ItemDescriptor(Block const&);
    ItemDescriptor(BlockLegacy const&);
    ItemDescriptor(Item const&, int);
    ItemDescriptor(int, int);
    void setAuxValue(short);
    void getItem()const;
    void getBlock()const;
    bool isValid()const;
    bool isNull()const;
    void getId()const;
    void getAuxValue()const;
    void getIdAux()const;
    void sameItem(ItemDescriptor const&)const;
    void sameItemAndAux(ItemDescriptor const&)const;
    void sameItemAndAux(ItemStack const&)const;
    void getLegacyBlock()const;
};
