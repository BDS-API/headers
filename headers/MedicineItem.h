#pragma once

class MedicineItem : ChemistryItem {

public:
    virtual ~MedicineItem();
    virtual bool isValidAuxValue(int)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void setIcon(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);

    void MedicineItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void getMobEffect(ItemStack const&);
    bool canPlayerDrink(ItemStack const&, Player const&);
};
