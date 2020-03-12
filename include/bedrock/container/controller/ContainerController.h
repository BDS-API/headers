#pragma once

#include <memory>
#include <string>
#include <functional>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../../unmapped/ContainerItemStack.h"


class ContainerController {

public:
    virtual void _getAvailableAddCount(int)const;
    virtual bool isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canRemove(int, int)const;
    virtual void getBackgroundStyle(int)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void _onItemChanged(int);
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    ~ContainerController();
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    void getAvailableAutoPlaceCount(int, ContainerItemStack const&, bool)const;
    void _canAdd(int, ContainerItemStack const&, ItemTransferAmount)const;
    void removeItem(int, int);
    bool isExpandableItemFiltered(int)const;
    bool canSet(int, ContainerItemStack const&, ItemTransferAmount, bool)const;
//  void addToStack(int, ContainerItemStack, ItemTakeType); //TODO: incomplete function definition
    void getContainerModel()const;
//  void _canRemove(int, ItemTakeType)const; //TODO: incomplete function definition
    void getItem(int)const;
    bool canRemove(int, int)const;
    void getContainerCategory()const;
//  void setItem(int, ContainerItemStack &, ItemPlaceType, bool); //TODO: incomplete function definition
    void getContainerSize()const;
    bool canSet(int, ContainerItemStack const&, bool)const;
    void getAvailableAddCount(int, ContainerItemStack const&)const;
    std::string getContainerName()const;
    void shouldDrop()const;
    void getExpandoStatus(int)const;
    ContainerController(std::weak_ptr<ContainerModel>, bool);
    void _addItem(int, int);
//  void removeItem(int, ItemTakeType); //TODO: incomplete function definition
    void forEachItem(std::function<void (int, ContainerItemStack const&)>);
    bool canSet(ContainerItemStack const&, bool)const;
};
