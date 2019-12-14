#pragma once

class MedicineItem : ChemistryItem {

public:
    virtual ~MedicineItem();
    virtual bool isValidAuxValue(int)const;
    virtual void use(ItemStack &, Player &)const;
    virtual void useTimeDepleted(ItemStack &, Level *, Player *)const;
    virtual void setIcon(std::string const&, int);

    void MedicineItem(std::string const&, int);
    void getMobEffect(ItemStack const&);
    bool canPlayerDrink(ItemStack const&, Player const&);
};
