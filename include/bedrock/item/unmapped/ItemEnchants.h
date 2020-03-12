#pragma once

#include <string>
#include "../../../unmapped/EnchantmentInstance.h"


class ItemEnchants {

public:
    void getSlot()const;
    void getEnchants(int)const;
    ItemEnchants(int, ListTag const&);
    ItemEnchants(ItemEnchants &&);
    void _toList()const;
    void _fromList(ListTag const&);
    ~ItemEnchants();
    void addEnchant(EnchantmentInstance, bool);
    void count()const;
    bool canEnchant(EnchantmentInstance, bool);
    bool isEmpty()const;
    void getAllEnchants()const;
    std::string getEnchantNames()const;
    void getTotalValue(bool)const;
//  bool hasEnchant(Enchant::Type)const; //TODO: incomplete function definition
    void addEnchants(ItemEnchants const&, bool);
    ItemEnchants(int);
};
