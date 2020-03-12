#pragma once

#include "../../nbt/ListTag.h"
#include "../../../unmapped/EnchantmentInstance.h"


class ItemEnchants {

public:
    ItemEnchants(int, ListTag const&);
    bool canEnchant(EnchantmentInstance, bool);
    void _fromList(ListTag const&);
    void getTotalValue(bool)const;
    ItemEnchants(ItemEnchants &&);
    void getSlot()const;
    void addEnchants(ItemEnchants const&, bool);
    ~ItemEnchants();
    void _toList()const;
    std::string getEnchantNames()const;
    bool isEmpty()const;
//  bool hasEnchant(Enchant::Type)const; //TODO: incomplete function definition
    ItemEnchants(int);
    void getEnchants(int)const;
    void count()const;
    void addEnchant(EnchantmentInstance, bool);
    void getAllEnchants()const;
};
