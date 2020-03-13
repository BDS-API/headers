#pragma once

#include <string>
#include <functional>
#include "../../../unmapped/ContainerContentChangeListener.h"


class ContainerModel : ContainerContentChangeListener {

public:
    virtual void containerContentChanged(int); // _ZN14ContainerModel23containerContentChangedEi
    ~ContainerModel(); // _ZN14ContainerModelD2Ev
    virtual void postInit(); // _ZN14ContainerModel8postInitEv
    virtual void releaseResources(); // _ZN14ContainerModel16releaseResourcesEv
    virtual void getContainerSize()const; // _ZNK14ContainerModel16getContainerSizeEv
    virtual void getFilteredContainerSize()const; // _ZNK14ContainerModel24getFilteredContainerSizeEv
    virtual void tick(int); // _ZN14ContainerModel4tickEi
    virtual void getItem(int)const; // _ZNK14ContainerModel7getItemEi
    virtual void getItems()const; // _ZNK14ContainerModel8getItemsEv
    virtual void getItemInstances(); // _ZN14ContainerModel16getItemInstancesEv
    virtual void setItem(int, ContainerItemStack const&); // _ZN14ContainerModel7setItemEiRK18ContainerItemStack
    virtual bool isValid(); // _ZN14ContainerModel7isValidEv
    virtual bool isItemFiltered(ContainerItemStack const&)const; // _ZNK14ContainerModel14isItemFilteredERK18ContainerItemStack
    virtual bool isExpanableItemFiltered(int)const; // _ZNK14ContainerModel23isExpanableItemFilteredEi
    virtual void getItemExpandStatus(int)const; // _ZNK14ContainerModel19getItemExpandStatusEi
    virtual std::string getItemGroupName(int)const; // _ZNK14ContainerModel16getItemGroupNameB5cxx11Ei
    virtual void switchItemExpando(int); // _ZN14ContainerModel17switchItemExpandoEi
    virtual void _getContainerOffset()const; // _ZNK14ContainerModel19_getContainerOffsetEv
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&); // _ZN14ContainerModel14_onItemChangedEiRK9ItemStackS2_
//  ContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition // _ZN14ContainerModelC2E17ContainerEnumNamei17ContainerCategory
    void resize(int); // _ZN14ContainerModel6resizeEi
    void _init(); // _ZN14ContainerModel5_initEv
    void registerOnContainerChangedCallback(std::function<void (int, ItemStack const&, ItemStack const&)>); // _ZN14ContainerModel34registerOnContainerChangedCallbackESt8functionIFviRK9ItemStackS3_EE
    void registerPlayerNotificationCallback(std::function<void (int, ItemStack const&, ItemStack const&)>); // _ZN14ContainerModel34registerPlayerNotificationCallbackESt8functionIFviRK9ItemStackS3_EE
    std::string getContainerStringName()const; // _ZNK14ContainerModel22getContainerStringNameB5cxx11Ev
    void getContainerEnumName()const; // _ZNK14ContainerModel20getContainerEnumNameEv
    bool isIntermediaryCategory()const; // _ZNK14ContainerModel22isIntermediaryCategoryEv
    void _notifyPlayer(int, ItemStack const&, ItemStack const&); // _ZN14ContainerModel13_notifyPlayerEiRK9ItemStackS2_
    void networkUpdateItem(int, ItemStack const&, ItemStack const&); // _ZN14ContainerModel17networkUpdateItemEiRK9ItemStackS2_
    void getContainerCategory()const; // _ZNK14ContainerModel20getContainerCategoryEv
//  void setContainerCategory(ContainerCategory); //TODO: incomplete function definition // _ZN14ContainerModel20setContainerCategoryE17ContainerCategory
    void setItemSource(int, SlotData const&); // _ZN14ContainerModel13setItemSourceEiRK8SlotData
    void getItemSource(int)const; // _ZNK14ContainerModel13getItemSourceEi
    void getItemCount(ItemDescriptor const&); // _ZN14ContainerModel12getItemCountERK14ItemDescriptor
};
