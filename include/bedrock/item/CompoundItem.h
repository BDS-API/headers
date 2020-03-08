#pragma once

#include "../nbt/CompoundTag"
#include "unmapped/ItemDescriptor"


class CompoundItem : ChemistryItem {

public:
    static long mIdToSpecialCompound;
    static long mTypeToSpecialCompound;

    virtual CompoundItem::~CompoundItem()
    virtual void buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&)const;
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    CompoundItem(std::string const&, int);
    void _registerSpecialCompounds();
    void _registerSpecialCompound(ItemInstance const&, CompoundType);
    void unregisterSpecialCompounds();
    void getCompoundType(ItemDescriptor const&);
    void getItemForCompound(CompoundType, int);
    void getIngredientForCompound(CompoundType);
    bool isCompoundItem(ItemInstance const&);
    void getCompoundContainer(CompoundType);
    void getCompoundContainer(ItemInstance const&);
};
