#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "Item.h"


class LeadItem : Item {

public:
    ~LeadItem(); // _ZN8LeadItemD2Ev
    virtual void _useOn(ItemStack &, Actor &, BlockPos, unsigned char, float, float, float)const; // _ZNK8LeadItem6_useOnER9ItemStackR5Actor8BlockPoshfff
    LeadItem(std::string const&, int); // _ZN8LeadItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void bindPlayerMobs(Actor &, int, int, int, ItemInstance *); // _ZN8LeadItem14bindPlayerMobsER5ActoriiiP12ItemInstance
    bool canBindPlayerMobs(Actor const&, BlockPos const&); // _ZN8LeadItem17canBindPlayerMobsERK5ActorRK8BlockPos
};
