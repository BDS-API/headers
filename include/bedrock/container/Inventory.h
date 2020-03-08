#pragma once

#include "../actor/Player"
#include "../item/ItemStack"


class Inventory : FillingContainer {

public:
    virtual Inventory::~Inventory()
    virtual void init();
    virtual void add(ItemStack &);
    virtual bool canAdd(ItemStack const&)const;
    virtual void dropAll(bool);
    virtual void getEmptySlotsCount()const;
    virtual void getFirstEmptySlot()const;
    virtual void setContainerSize(int);

    Inventory(Player *);
    void setupDefault();
    void _getDefaultStartingMapScale()const;
    void clearInventoryWithDefault(bool);
    void tick(int);
    void getComplexItems();
};
