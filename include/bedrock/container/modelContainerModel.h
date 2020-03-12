#pragma once

#include "../../item/ItemStack.h"
#include "../../../unmapped/ContainerContentChangeListener.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "../../../unmapped/SlotData.h"
#include <functional>
#include "../../item/unmapped/ItemDescriptor.h"


class ContainerModel : ContainerContentChangeListener {

public:
    virtual void switchItemExpando(int);
    virtual void setItem(int, ContainerItemStack const&);
    virtual void containerContentChanged(int);
    virtual void getContainerSize()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    virtual bool isItemFiltered(ContainerItemStack const&)const;
    virtual bool isValid();
    virtual void releaseResources();
    virtual void postInit();
    ~ContainerModel();
    virtual void getItems()const;
    virtual void tick(int);
    virtual bool isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual void getFilteredContainerSize()const;
    virtual void _getContainerOffset()const;
    virtual void getItemInstances();
    virtual std::string getItemGroupName(int)const;
    virtual void getItem(int)const;
//  void setContainerCategory(ContainerCategory); //TODO: incomplete function definition
    void _notifyPlayer(int, ItemStack const&, ItemStack const&);
    void resize(int);
    void _init();
    void networkUpdateItem(int, ItemStack const&, ItemStack const&);
    void setItemSource(int, SlotData const&);
    void getItemSource(int)const;
//  ContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition
    void getContainerEnumName()const;
    void registerOnContainerChangedCallback(std::function<void (int, ItemStack const&, ItemStack const&)>);
    void getContainerCategory()const;
    void getItemCount(ItemDescriptor const&);
    bool isIntermediaryCategory()const;
    std::string getContainerStringName()const;
    void registerPlayerNotificationCallback(std::function<void (int, ItemStack const&, ItemStack const&)>);
};
