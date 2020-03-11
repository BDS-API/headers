#pragma once

#include "../../item/unmapped/ItemDescriptor.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../../unmapped/ContainerContentChangeListener.h"
#include "../../item/ItemStack.h"
#include "../../../unmapped/SlotData.h"
#include <functional>
#include <string>


class ContainerModel : ContainerContentChangeListener {

public:
    virtual void containerContentChanged(int);
    virtual ~ContainerModel();
    virtual void postInit();
    virtual void releaseResources();
    virtual void getContainerSize()const;
    virtual void getFilteredContainerSize()const;
    virtual void tick(int);
    virtual void getItem(int)const;
    virtual void getItems()const;
    virtual void getItemInstances();
    virtual void setItem(int, ContainerItemStack const&);
    virtual bool isValid();
    virtual bool isItemFiltered(ContainerItemStack const&)const;
    virtual bool isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual std::string getItemGroupName(int)const;
    virtual void switchItemExpando(int);
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);

//  ContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition
    void resize(int);
    void _init();
//  void registerOnContainerChangedCallback(std::function<void (int, ItemStack const&, ItemStack const&)>); //TODO: incomplete function definition
//  void registerPlayerNotificationCallback(std::function<void (int, ItemStack const&, ItemStack const&)>); //TODO: incomplete function definition
    std::string getContainerStringName()const;
    void getContainerEnumName()const;
    bool isIntermediaryCategory()const;
    void _notifyPlayer(int, ItemStack const&, ItemStack const&);
    void networkUpdateItem(int, ItemStack const&, ItemStack const&);
    void getContainerCategory()const;
//  void setContainerCategory(ContainerCategory); //TODO: incomplete function definition
    void setItemSource(int, SlotData const&);
    void getItemSource(int)const;
    void getItemCount(ItemDescriptor const&);
};
