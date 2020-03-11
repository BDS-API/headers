#pragma once

#include "./ChemistryItem.h"
#include "./ItemStackBase.h"
#include <memory>
#include "./ItemInstance.h"
#include "unmapped/ItemDescriptor.h"
#include "../nbt/CompoundTag.h"
#include <string>


class CompoundItem : ChemistryItem {

public:
    static long mIdToSpecialCompound;
    static long mTypeToSpecialCompound;

    virtual ~CompoundItem();
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    CompoundItem(std::string const&, int);
    void _registerSpecialCompounds();
//  void _registerSpecialCompound(ItemInstance const&, CompoundType); //TODO: incomplete function definition
    void unregisterSpecialCompounds();
//  std::string _getName(CompoundType); //TODO: incomplete function definition
    void getCompoundType(ItemDescriptor const&);
//  void getItemForCompound(CompoundType, int); //TODO: incomplete function definition
//  void getIngredientForCompound(CompoundType); //TODO: incomplete function definition
    bool isCompoundItem(ItemInstance const&);
//  void getCompoundContainer(CompoundType); //TODO: incomplete function definition
    void getCompoundContainer(ItemInstance const&);
    std::string getCompoundFormula(ItemInstance const&);
};
