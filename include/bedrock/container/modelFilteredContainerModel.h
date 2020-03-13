#pragma once

#include "ExpandoContainerModel.h"
#include <functional>


class FilteredContainerModel : ExpandoContainerModel {

public:
    virtual void containerContentChanged(int); // _ZN22FilteredContainerModel23containerContentChangedEi
    ~FilteredContainerModel(); // _ZN22FilteredContainerModelD2Ev
    virtual void getContainerSize()const; // _ZNK22FilteredContainerModel16getContainerSizeEv
    virtual void getFilteredContainerSize()const; // _ZNK22FilteredContainerModel24getFilteredContainerSizeEv
    virtual void getItem(int)const; // _ZNK22FilteredContainerModel7getItemEi
    virtual void setItem(int, ContainerItemStack const&); // _ZN22FilteredContainerModel7setItemEiRK18ContainerItemStack
    virtual bool isExpanableItemFiltered(int)const; // _ZNK22FilteredContainerModel23isExpanableItemFilteredEi
    virtual void refreshContainer(bool); // _ZN22FilteredContainerModel16refreshContainerEb
//  FilteredContainerModel(ContainerEnumName, int, ContainerCategory, bool, bool, std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition // _ZN22FilteredContainerModelC2E17ContainerEnumNamei17ContainerCategorybbSt8functionIF12FilterResultRK18ContainerItemStackEE
    void _refreshContainer(bool); // _ZN22FilteredContainerModel17_refreshContainerEb
    void _init(); // _ZN22FilteredContainerModel5_initEv
    void _getContainerSize()const; // _ZNK22FilteredContainerModel17_getContainerSizeEv
//  void setFilteringRule(std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition // _ZN22FilteredContainerModel16setFilteringRuleESt8functionIF12FilterResultRK18ContainerItemStackEE
    bool isFiltering()const; // _ZNK22FilteredContainerModel11isFilteringEv
    void setFiltering(bool); // _ZN22FilteredContainerModel12setFilteringEb
    void getIndexForCreativeItem(ContainerItemStack const&)const; // _ZNK22FilteredContainerModel23getIndexForCreativeItemERK18ContainerItemStack
};
