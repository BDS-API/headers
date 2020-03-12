#pragma once

#include "../../block/BlockLegacy.h"
#include "../../../unmapped/Block.h"
#include "../ItemStack.h"
#include "../Item.h"


class ItemDescriptor {

public:
    ItemDescriptor(Block const&);
    ~ItemDescriptor();
    void getId()const;
    ItemDescriptor(ItemDescriptor const&);
    bool isValid()const;
    ItemDescriptor(ItemDescriptor &&);
    void operator==(ItemDescriptor const&)const;
    void getAuxValue()const;
    bool isNull()const;
    void sameItemAndAux(ItemStack const&)const;
    std::string getRawNameId()const;
    ItemDescriptor();
    void getIdAux()const;
    void sameItem(ItemDescriptor const&)const;
    void getLegacyBlock()const;
    void getBlock()const;
    ItemDescriptor(int, int);
    void setAuxValue(short);
    ItemDescriptor(Item const&, int);
    void sameItemAndAux(ItemDescriptor const&)const;
    ItemDescriptor(BlockLegacy const&);
    void getItem()const;
};
