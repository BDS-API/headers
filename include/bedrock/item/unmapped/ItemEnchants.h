#pragma once

#include "../../../unmapped/EnchantmentInstance"
#include "../../nbt/ListTag"


class ItemEnchants {

public:

    ItemEnchants(int);
    ItemEnchants(int, ListTag const&);
    void _fromList(ListTag const&);
    ItemEnchants(ItemEnchants&&);
    bool canEnchant(EnchantmentInstance, bool);
    void addEnchant(EnchantmentInstance, bool);
    void addEnchants(ItemEnchants const&, bool);
    void getAllEnchants()const;
    void getEnchants(int)const;
    void count()const;
    bool isEmpty()const;
    void getTotalValue(bool)const;
    bool hasEnchant(Enchant::Type)const;
    void getSlot()const;
    void _toList()const;
};
