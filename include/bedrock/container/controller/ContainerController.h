#pragma once

#include "../../../unmapped/Recipes.h"
#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include <functional>
#include <string>


class ContainerController {

public:
    virtual ~ContainerController();
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
    std::string getContainerName()const;
    void getContainerModel()const;
    void shouldDrop()const;
//  void setItem(int, ContainerItemStack &, ItemPlaceType, bool); //TODO: incomplete function definition
    bool canSet(int, ContainerItemStack const&, ItemTransferAmount, bool)const;
    void _canAdd(int, ContainerItemStack const&, ItemTransferAmount)const;
    void _addItem(int, int);
//  void removeItem(int, ItemTakeType); //TODO: incomplete function definition
//  void _canRemove(int, ItemTakeType)const; //TODO: incomplete function definition
    void removeItem(int, int);
//  void addToStack(int, ContainerItemStack, ItemTakeType); //TODO: incomplete function definition
    bool canSet(ContainerItemStack const&, bool)const;
    bool canSet(int, ContainerItemStack const&, bool)const;
    bool isExpandableItemFiltered(int)const;
    void getExpandoStatus(int)const;
//  void forEachItem(std::function<void (int, ContainerItemStack const&)>); //TODO: incomplete function definition
    bool canRemove(int, int)const;
    void getContainerCategory()const;
    void getAvailableAutoPlaceCount(int, ContainerItemStack const&, bool)const;
    void getAvailableAddCount(int, ContainerItemStack const&)const;
};
