#pragma once

#include "../../../unmapped/Block.h"
#include "./ItemDescriptor.h"
#include "../Item.h"
#include "../../block/BlockLegacy.h"
#include "../ItemStack.h"
#include <string>


class ItemDescriptor {

public:

    ~ItemDescriptor();
    ItemDescriptor(ItemDescriptor const&);
    ItemDescriptor(ItemDescriptor &&);
    ItemDescriptor();
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
    void operator==(ItemDescriptor const&)const;
    std::string getRawNameId()const;
    void getLegacyBlock()const;
};
