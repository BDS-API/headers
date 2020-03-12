#pragma once

#include "ChemistryItem.h"
#include <string>
#include "../nbt/CompoundTag.h"
#include "ItemStackBase.h"
#include <memory>
#include "ItemInstance.h"
#include "unmapped/ItemDescriptor.h"


class CompoundItem : ChemistryItem {

public:
    static long mIdToSpecialCompound;
    static long mTypeToSpecialCompound;

    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const;
    ~CompoundItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);
    std::string getCompoundFormula(ItemInstance const&);
//  void getIngredientForCompound(CompoundType); //TODO: incomplete function definition
//  void _registerSpecialCompound(ItemInstance const&, CompoundType); //TODO: incomplete function definition
    CompoundItem(std::string const&, int);
//  void getItemForCompound(CompoundType, int); //TODO: incomplete function definition
    void getCompoundType(ItemDescriptor const&);
    void _registerSpecialCompounds();
    bool isCompoundItem(ItemInstance const&);
//  std::string _getName(CompoundType); //TODO: incomplete function definition
//  void getCompoundContainer(CompoundType); //TODO: incomplete function definition
    void getCompoundContainer(ItemInstance const&);
    void unregisterSpecialCompounds();
};
