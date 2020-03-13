#pragma once

#include "FillingContainer.h"


class Inventory : FillingContainer {

public:
    ~Inventory(); // _ZN9InventoryD2Ev
    virtual void init(); // _ZN9Inventory4initEv
    virtual void add(ItemStack &); // _ZN9Inventory3addER9ItemStack
    virtual bool canAdd(ItemStack const&)const; // _ZNK9Inventory6canAddERK9ItemStack
    virtual void dropAll(bool); // _ZN9Inventory7dropAllEb
    virtual void getEmptySlotsCount()const; // _ZNK9Inventory18getEmptySlotsCountEv
    virtual void getFirstEmptySlot()const; // _ZNK9Inventory17getFirstEmptySlotEv
    virtual void setContainerSize(int); // _ZN9Inventory16setContainerSizeEi
    Inventory(Player *); // _ZN9InventoryC2EP6Player
    void setupDefault(); // _ZN9Inventory12setupDefaultEv
    void _getDefaultStartingMapScale()const; // _ZNK9Inventory27_getDefaultStartingMapScaleEv
    void clearInventoryWithDefault(bool); // _ZN9Inventory25clearInventoryWithDefaultEb
    void tick(int); // _ZN9Inventory4tickEi
    void getComplexItems(); // _ZN9Inventory15getComplexItemsEv
};
