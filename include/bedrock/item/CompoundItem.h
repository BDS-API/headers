#pragma once

#include <memory>
#include <string>
#include "ChemistryItem.h"


class CompoundItem : ChemistryItem {

public:
    static long mIdToSpecialCompound;
    static long mTypeToSpecialCompound;

    virtual void getIcon(ItemStackBase const&, int, bool)const;
    ~CompoundItem();
    virtual void setIcon(std::string const&, int);
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    CompoundItem(std::string const&, int);
//  void getIngredientForCompound(CompoundType); //TODO: incomplete function definition
//  std::string _getName(CompoundType); //TODO: incomplete function definition
//  void _registerSpecialCompound(ItemInstance const&, CompoundType); //TODO: incomplete function definition
    void getCompoundContainer(ItemInstance const&);
    void getCompoundType(ItemDescriptor const&);
    void _registerSpecialCompounds();
//  void getCompoundContainer(CompoundType); //TODO: incomplete function definition
    void unregisterSpecialCompounds();
    std::string getCompoundFormula(ItemInstance const&);
    bool isCompoundItem(ItemInstance const&);
//  void getItemForCompound(CompoundType, int); //TODO: incomplete function definition
};
