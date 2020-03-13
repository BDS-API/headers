#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../../unmapped/ContainerItemStack.h"
#include <string>
#include <functional>


class ContainerController {

public:
    ~ContainerController(); // _ZN19ContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK19ContainerController13isItemAllowedERK12ItemInstance
    virtual bool isItemAllowedAtSlot(ContainerItemStack const&, int)const; // _ZNK19ContainerController19isItemAllowedAtSlotERK18ContainerItemStacki
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const; // _ZNK19ContainerController14isItemFilteredERK7RecipesRK18ContainerItemStack
    virtual void getBackgroundStyle(int)const; // _ZNK19ContainerController18getBackgroundStyleEi
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK19ContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const; // _ZNK19ContainerController21_getAvailableSetCountEiRK18ContainerItemStack
    virtual void _getAvailableAddCount(int)const; // _ZNK19ContainerController21_getAvailableAddCountEi
    virtual void _canRemove(int, int)const; // _ZNK19ContainerController10_canRemoveEii
    virtual void _onItemChanged(int); // _ZN19ContainerController14_onItemChangedEi
    ContainerController(std::weak_ptr<ContainerModel>, bool); // _ZN19ContainerControllerC2ESt8weak_ptrI14ContainerModelEb
    void getItem(int)const; // _ZNK19ContainerController7getItemEi
    void getContainerSize()const; // _ZNK19ContainerController16getContainerSizeEv
    std::string getContainerName()const; // _ZNK19ContainerController16getContainerNameB5cxx11Ev
    void getContainerModel()const; // _ZNK19ContainerController17getContainerModelEv
    void shouldDrop()const; // _ZNK19ContainerController10shouldDropEv
//  void setItem(int, ContainerItemStack &, ItemPlaceType, bool); //TODO: incomplete function definition // _ZN19ContainerController7setItemEiR18ContainerItemStack13ItemPlaceTypeb
    bool canSet(int, ContainerItemStack const&, ItemTransferAmount, bool)const; // _ZNK19ContainerController6canSetEiRK18ContainerItemStack18ItemTransferAmountb
    void _canAdd(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK19ContainerController7_canAddEiRK18ContainerItemStack18ItemTransferAmount
    void _addItem(int, int); // _ZN19ContainerController8_addItemEii
//  void removeItem(int, ItemTakeType); //TODO: incomplete function definition // _ZN19ContainerController10removeItemEi12ItemTakeType
//  void _canRemove(int, ItemTakeType)const; //TODO: incomplete function definition // _ZNK19ContainerController10_canRemoveEi12ItemTakeType
    void removeItem(int, int); // _ZN19ContainerController10removeItemEii
//  void addToStack(int, ContainerItemStack, ItemTakeType); //TODO: incomplete function definition // _ZN19ContainerController10addToStackEi18ContainerItemStack12ItemTakeType
    bool canSet(ContainerItemStack const&, bool)const; // _ZNK19ContainerController6canSetERK18ContainerItemStackb
    bool canSet(int, ContainerItemStack const&, bool)const; // _ZNK19ContainerController6canSetEiRK18ContainerItemStackb
    bool isExpandableItemFiltered(int)const; // _ZNK19ContainerController24isExpandableItemFilteredEi
    void getExpandoStatus(int)const; // _ZNK19ContainerController16getExpandoStatusEi
    void forEachItem(std::function<void (int, ContainerItemStack const&)>); // _ZN19ContainerController11forEachItemESt8functionIFviRK18ContainerItemStackEE
    bool canRemove(int, int)const; // _ZNK19ContainerController9canRemoveEii
    void getContainerCategory()const; // _ZNK19ContainerController20getContainerCategoryEv
    void getAvailableAutoPlaceCount(int, ContainerItemStack const&, bool)const; // _ZNK19ContainerController26getAvailableAutoPlaceCountEiRK18ContainerItemStackb
    void getAvailableAddCount(int, ContainerItemStack const&)const; // _ZNK19ContainerController20getAvailableAddCountEiRK18ContainerItemStack
};
