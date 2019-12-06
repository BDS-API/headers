#pragma once

class CompoundItem : ChemistryItem {

public:
    static long CompoundItem::mIdToSpecialCompound;
    static long CompoundItem::mTypeToSpecialCompound;

    virtual ~CompoundItem();
    virtual void getIcon(ItemStackBase const&, int, bool)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);

    void CompoundItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
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
