#pragma once

#include <string>
#include "../../../unmapped/ContainerContentChangeListener.h"
#include <functional>


class ContainerModel : ContainerContentChangeListener {

public:
    virtual void getItems()const;
    virtual void getItemInstances();
    virtual void containerContentChanged(int);
    virtual void releaseResources();
    virtual void getFilteredContainerSize()const;
    virtual void getContainerSize()const;
    virtual std::string getItemGroupName(int)const;
    virtual bool isItemFiltered(ContainerItemStack const&)const;
    virtual void getItem(int)const;
    virtual void setItem(int, ContainerItemStack const&);
    virtual void switchItemExpando(int);
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);
    ~ContainerModel();
    virtual void postInit();
    virtual void _getContainerOffset()const;
    virtual bool isExpanableItemFiltered(int)const;
    virtual bool isValid();
    virtual void tick(int);
    virtual void getItemExpandStatus(int)const;
    std::string getContainerStringName()const;
    void _init();
    void _notifyPlayer(int, ItemStack const&, ItemStack const&);
    void registerOnContainerChangedCallback(std::function<void (int, ItemStack const&, ItemStack const&)>);
    void registerPlayerNotificationCallback(std::function<void (int, ItemStack const&, ItemStack const&)>);
    void getItemSource(int)const;
    void getContainerCategory()const;
    void setItemSource(int, SlotData const&);
    bool isIntermediaryCategory()const;
    void networkUpdateItem(int, ItemStack const&, ItemStack const&);
    void getContainerEnumName()const;
//  void setContainerCategory(ContainerCategory); //TODO: incomplete function definition
    void getItemCount(ItemDescriptor const&);
    void resize(int);
//  ContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition
};
