#pragma once

#include <string>
#include "ChemistryStickItem.h"
#include <memory>


class GlowStickItem : ChemistryStickItem {

public:
    static long MAX_ACTIVE_TICKS;
    static long COLORS;

    ~GlowStickItem(); // _ZN13GlowStickItemD2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK13GlowStickItem15isValidAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK13GlowStickItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual bool isEmissive(int)const; // _ZNK13GlowStickItem10isEmissiveEi
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK13GlowStickItem7getIconERK13ItemStackBaseib
    virtual void getIconYOffset()const; // _ZNK13GlowStickItem14getIconYOffsetEv
    GlowStickItem(std::string const&, int); // _ZN13GlowStickItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
