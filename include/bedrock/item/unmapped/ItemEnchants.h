#pragma once

#include "./ItemEnchants.h"
#include "../../../unmapped/EnchantmentInstance.h"
#include "../../nbt/ListTag.h"
#include <string>


class ItemEnchants {

public:

    ~ItemEnchants();
    ItemEnchants(int);
    ItemEnchants(int, ListTag const&);
    void _fromList(ListTag const&);
    ItemEnchants(ItemEnchants &&);
    bool canEnchant(EnchantmentInstance, bool);
    void addEnchant(EnchantmentInstance, bool);
    void addEnchants(ItemEnchants const&, bool);
    void getAllEnchants()const;
    void getEnchants(int)const;
    std::string getEnchantNames()const;
    void count()const;
    bool isEmpty()const;
    void getTotalValue(bool)const;
//  bool hasEnchant(Enchant::Type)const; //TODO: incomplete function definition
    void getSlot()const;
    void _toList()const;
};
