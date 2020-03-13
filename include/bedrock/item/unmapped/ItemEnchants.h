#pragma once

#include <string>
#include "../../../unmapped/EnchantmentInstance.h"


class ItemEnchants {

public:
    ~ItemEnchants(); // _ZN12ItemEnchantsD2Ev
    ItemEnchants(int); // _ZN12ItemEnchantsC2Ei
    ItemEnchants(int, ListTag const&); // _ZN12ItemEnchantsC2EiRK7ListTag
    void _fromList(ListTag const&); // _ZN12ItemEnchants9_fromListERK7ListTag
    ItemEnchants(ItemEnchants &&); // _ZN12ItemEnchantsC2EOS_
    bool canEnchant(EnchantmentInstance, bool); // _ZN12ItemEnchants10canEnchantE19EnchantmentInstanceb
    void addEnchant(EnchantmentInstance, bool); // _ZN12ItemEnchants10addEnchantE19EnchantmentInstanceb
    void addEnchants(ItemEnchants const&, bool); // _ZN12ItemEnchants11addEnchantsERKS_b
    void getAllEnchants()const; // _ZNK12ItemEnchants14getAllEnchantsEv
    void getEnchants(int)const; // _ZNK12ItemEnchants11getEnchantsEi
    std::string getEnchantNames()const; // _ZNK12ItemEnchants15getEnchantNamesB5cxx11Ev
    void count()const; // _ZNK12ItemEnchants5countEv
    bool isEmpty()const; // _ZNK12ItemEnchants7isEmptyEv
    void getTotalValue(bool)const; // _ZNK12ItemEnchants13getTotalValueEb
//  bool hasEnchant(Enchant::Type)const; //TODO: incomplete function definition // _ZNK12ItemEnchants10hasEnchantEN7Enchant4TypeE
    void getSlot()const; // _ZNK12ItemEnchants7getSlotEv
    void _toList()const; // _ZNK12ItemEnchants7_toListEv
};
