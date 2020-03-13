#pragma once

#include <string>
#include "ChemistryStickItem.h"
#include <memory>


class SparklerItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    ~SparklerItem(); // _ZN12SparklerItemD2Ev
    virtual bool isHandEquipped()const; // _ZNK12SparklerItem14isHandEquippedEv
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK12SparklerItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void inventoryTick(ItemStack &, Level &, Actor &, int, bool)const; // _ZNK12SparklerItem13inventoryTickER9ItemStackR5LevelR5Actorib
    virtual bool isEmissive(int)const; // _ZNK12SparklerItem10isEmissiveEi
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK12SparklerItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN12SparklerItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    SparklerItem(std::string const&, int); // _ZN12SparklerItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getColorFromData(int); // _ZN12SparklerItem17_getColorFromDataEi
    void getColor(int); // _ZN12SparklerItem8getColorEi
};
