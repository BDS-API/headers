#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../item/unmapped/ItemTransferAmount"
#include "../../item/ItemInstance"
#include "../model/ContainerModel"
#include "../../../unmapped/Recipes"


class ContainerController {

public:
    virtual ContainerController::~ContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);

    ContainerController(std::weak_ptr<ContainerModel>, bool);
    void getItem(int)const;
    void getContainerSize()const;
    void getContainerModel()const;
    void shouldDrop()const;
    void setItem(int, ContainerItemStack &, ItemPlaceType, bool);
    bool canSet(int, ContainerItemStack const&, ItemTransferAmount, bool)const;
    void _canAdd(int, ContainerItemStack const&, ItemTransferAmount)const;
    void _addItem(int, int);
    void removeItem(int, ItemTakeType);
    void _canRemove(int, ItemTakeType)const;
    void removeItem(int, int);
    void addToStack(int, ContainerItemStack, ItemTakeType);
    bool canSet(ContainerItemStack const&, bool)const;
    bool canSet(int, ContainerItemStack const&, bool)const;
    bool isExpandableItemFiltered(int)const;
    void getExpandoStatus(int)const;
    void forEachItem(std::function<void ()(int, ContainerItemStack const&)>);
    bool canRemove(int, int)const;
    void getContainerCategory()const;
    void getAvailableAutoPlaceCount(int, ContainerItemStack const&, bool)const;
    void getAvailableAddCount(int, ContainerItemStack const&)const;
};
