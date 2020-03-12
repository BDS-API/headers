#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include <functional>
#include "ExpandoContainerModel.h"


class FilteredContainerModel : ExpandoContainerModel {

public:
    virtual bool isExpanableItemFiltered(int)const;
    virtual void getFilteredContainerSize()const;
    virtual void getItem(int)const;
    virtual void refreshContainer(bool);
    virtual void containerContentChanged(int);
    virtual void setItem(int, ContainerItemStack const&);
    ~FilteredContainerModel();
    virtual void getContainerSize()const;
    void _getContainerSize()const;
    bool isFiltering()const;
    void _init();
//  FilteredContainerModel(ContainerEnumName, int, ContainerCategory, bool, bool, std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition
    void _refreshContainer(bool);
    void setFiltering(bool);
    void getIndexForCreativeItem(ContainerItemStack const&)const;
//  void setFilteringRule(std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition
};
