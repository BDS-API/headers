#pragma once

#include "../item/ItemStack.h"
#include "FillingContainer.h"
#include "../actor/Player.h"


class Inventory : FillingContainer {

public:
    virtual void getEmptySlotsCount()const;
    virtual void getFirstEmptySlot()const;
    virtual void setContainerSize(int);
    virtual bool canAdd(ItemStack const&)const;
    virtual void init();
    virtual void dropAll(bool);
    ~Inventory();
    virtual void add(ItemStack &);
    void setupDefault();
    void clearInventoryWithDefault(bool);
    void _getDefaultStartingMapScale()const;
    void tick(int);
    void getComplexItems();
    Inventory(Player *);
};
