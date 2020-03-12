#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include <functional>
#include <memory>
#include "../model/ContainerModel.h"
#include "../../../unmapped/Recipes.h"


class ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual bool isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    ~ContainerController();
    virtual void _onItemChanged(int);
    virtual void _getAvailableAddCount(int)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _canRemove(int, int)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    void getExpandoStatus(int)const;
//  void removeItem(int, ItemTakeType); //TODO: incomplete function definition
    void shouldDrop()const;
    bool canRemove(int, int)const;
    ContainerController(std::weak_ptr<ContainerModel>, bool);
    void getContainerModel()const;
    void _addItem(int, int);
    void forEachItem(std::function<void (int, ContainerItemStack const&)>);
    void _canAdd(int, ContainerItemStack const&, ItemTransferAmount)const;
    bool canSet(int, ContainerItemStack const&, bool)const;
    bool canSet(int, ContainerItemStack const&, ItemTransferAmount, bool)const;
    bool isExpandableItemFiltered(int)const;
    void getContainerSize()const;
    bool canSet(ContainerItemStack const&, bool)const;
//  void _canRemove(int, ItemTakeType)const; //TODO: incomplete function definition
    void getAvailableAddCount(int, ContainerItemStack const&)const;
    std::string getContainerName()const;
    void removeItem(int, int);
//  void addToStack(int, ContainerItemStack, ItemTakeType); //TODO: incomplete function definition
//  void setItem(int, ContainerItemStack &, ItemPlaceType, bool); //TODO: incomplete function definition
    void getItem(int)const;
    void getContainerCategory()const;
    void getAvailableAutoPlaceCount(int, ContainerItemStack const&, bool)const;
};
