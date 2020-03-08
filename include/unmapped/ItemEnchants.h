#pragma once

#include "../bedrock/nbt/ListTag"


class ItemEnchants {

public:

    ItemEnchants(int);
    ItemEnchants(int, ListTag const&);
    void _fromList(ListTag const&);
    ItemEnchants(ItemEnchants&&);
    bool canEnchant(EnchantmentInstance, bool);
    void addEnchant(EnchantmentInstance, bool);
    void addEnchants(ItemEnchants const&, bool);
    void getAllEnchants(void)const;
    void getEnchants(int)const;
    void count(void)const;
    bool isEmpty(void)const;
    void getTotalValue(bool)const;
    bool hasEnchant(Enchant::Type)const;
    void getSlot(void)const;
    void _toList(void)const;
};
