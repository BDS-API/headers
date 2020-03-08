#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../../unmapped/ContainerContentChangeListener"
#include "../../../unmapped/SlotData"
#include "../../item/unmapped/ItemDescriptor"
#include "../../item/ItemStack"


class ContainerModel : ContainerContentChangeListener {

public:
    virtual void containerContentChanged(int);
    virtual ContainerModel::~ContainerModel()
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
    virtual void getItemGroupName(int)const;
    virtual void switchItemExpando(int);
    virtual void _getContainerOffset()const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);

    ContainerModel(ContainerEnumName, int, ContainerCategory);
    void resize(int);
    void _init();
    void registerOnContainerChangedCallback(std::function<void ()(int, ItemStack const&, ItemStack const&)>);
    void registerPlayerNotificationCallback(std::function<void ()(int, ItemStack const&, ItemStack const&)>);
    void getContainerEnumName()const;
    bool isIntermediaryCategory()const;
    void _notifyPlayer(int, ItemStack const&, ItemStack const&);
    void networkUpdateItem(int, ItemStack const&, ItemStack const&);
    void getContainerCategory()const;
    void setContainerCategory(ContainerCategory);
    void setItemSource(int, SlotData const&);
    void getItemSource(int)const;
    void getItemCount(ItemDescriptor const&);
};
