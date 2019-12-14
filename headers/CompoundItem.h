#pragma once

class CompoundItem : ChemistryItem {

public:
    static long CompoundItem::mIdToSpecialCompound;
    static long CompoundItem::mTypeToSpecialCompound;

    virtual ~CompoundItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::string const&, int);

    void CompoundItem(std::string const&, int);
    void _registerSpecialCompounds(void);
    void _registerSpecialCompound(ItemInstance const&, CompoundType);
    void unregisterSpecialCompounds(void);
    void getCompoundType(ItemDescriptor const&);
    void getItemForCompound(CompoundType, int);
    void getIngredientForCompound(CompoundType);
    bool isCompoundItem(ItemInstance const&);
    void getCompoundContainer(CompoundType);
    void getCompoundContainer(ItemInstance const&);
};
