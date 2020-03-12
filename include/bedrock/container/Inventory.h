#pragma once

#include "FillingContainer.h"


class Inventory : FillingContainer {

public:
    virtual void dropAll(bool);
    virtual bool canAdd(ItemStack const&)const;
    virtual void init();
    virtual void getEmptySlotsCount()const;
    virtual void getFirstEmptySlot()const;
    virtual void add(ItemStack &);
    virtual void setContainerSize(int);
    ~Inventory();
    void tick(int);
    void getComplexItems();
    void clearInventoryWithDefault(bool);
    void setupDefault();
    void _getDefaultStartingMapScale()const;
    Inventory(Player *);
};
