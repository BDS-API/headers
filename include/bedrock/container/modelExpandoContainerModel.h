#pragma once

#include <string>
#include <functional>
#include "ContainerModel.h"


class ExpandoContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int); // _ZN21ExpandoContainerModel23containerContentChangedEi
    ~ExpandoContainerModel(); // _ZN21ExpandoContainerModelD2Ev
    virtual void getContainerSize()const; // _ZNK21ExpandoContainerModel16getContainerSizeEv
    virtual void getFilteredContainerSize()const; // _ZNK21ExpandoContainerModel24getFilteredContainerSizeEv
    virtual void getItem(int)const; // _ZNK21ExpandoContainerModel7getItemEi
    virtual void getItems()const; // _ZNK21ExpandoContainerModel8getItemsEv
    virtual void setItem(int, ContainerItemStack const&); // _ZN21ExpandoContainerModel7setItemEiRK18ContainerItemStack
    virtual void getItemExpandStatus(int)const; // _ZNK21ExpandoContainerModel19getItemExpandStatusEi
    virtual std::string getItemGroupName(int)const; // _ZNK21ExpandoContainerModel16getItemGroupNameB5cxx11Ei
    virtual void switchItemExpando(int); // _ZN21ExpandoContainerModel17switchItemExpandoEi
    virtual void refreshContainer(bool); // _ZN21ExpandoContainerModel16refreshContainerEb
//  ExpandoContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition // _ZN21ExpandoContainerModelC2E17ContainerEnumNamei17ContainerCategory
    void getIndexForCreativeItem(ContainerItemStack const&)const; // _ZNK21ExpandoContainerModel23getIndexForCreativeItemERK18ContainerItemStack
    void _init(); // _ZN21ExpandoContainerModel5_initEv
    void _refreshContainer(bool); // _ZN21ExpandoContainerModel17_refreshContainerEb
    void setOnItemExpandedCallback(std::function<void (std::string const&, int, int)>); // _ZN21ExpandoContainerModel25setOnItemExpandedCallbackESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiEE
    void _generateCurrentItems(); // _ZN21ExpandoContainerModel21_generateCurrentItemsEv
};
