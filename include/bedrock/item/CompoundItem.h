#pragma once

#include <string>
#include <memory>
#include "ChemistryItem.h"


class CompoundItem : ChemistryItem {

public:
    static long mIdToSpecialCompound;
    static long mTypeToSpecialCompound;

    ~CompoundItem(); // _ZN12CompoundItemD2Ev
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK12CompoundItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK12CompoundItem7getIconERK13ItemStackBaseib
    virtual void setIcon(std::string const&, int); // _ZN12CompoundItem7setIconERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    CompoundItem(std::string const&, int); // _ZN12CompoundItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _registerSpecialCompounds(); // _ZN12CompoundItem25_registerSpecialCompoundsEv
//  void _registerSpecialCompound(ItemInstance const&, CompoundType); //TODO: incomplete function definition // _ZN12CompoundItem24_registerSpecialCompoundERK12ItemInstance12CompoundType
    void unregisterSpecialCompounds(); // _ZN12CompoundItem26unregisterSpecialCompoundsEv
//  std::string _getName(CompoundType); //TODO: incomplete function definition // _ZN12CompoundItem8_getNameB5cxx11E12CompoundType
    void getCompoundType(ItemDescriptor const&); // _ZN12CompoundItem15getCompoundTypeERK14ItemDescriptor
//  void getItemForCompound(CompoundType, int); //TODO: incomplete function definition // _ZN12CompoundItem18getItemForCompoundE12CompoundTypei
//  void getIngredientForCompound(CompoundType); //TODO: incomplete function definition // _ZN12CompoundItem24getIngredientForCompoundE12CompoundType
    bool isCompoundItem(ItemInstance const&); // _ZN12CompoundItem14isCompoundItemERK12ItemInstance
//  void getCompoundContainer(CompoundType); //TODO: incomplete function definition // _ZN12CompoundItem20getCompoundContainerE12CompoundType
    void getCompoundContainer(ItemInstance const&); // _ZN12CompoundItem20getCompoundContainerERK12ItemInstance
    std::string getCompoundFormula(ItemInstance const&); // _ZN12CompoundItem18getCompoundFormulaB5cxx11ERK12ItemInstance
};
