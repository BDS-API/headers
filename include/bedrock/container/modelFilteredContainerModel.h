#pragma once

#include "ExpandoContainerModel.h"
#include <functional>


class FilteredContainerModel : ExpandoContainerModel {

public:
    virtual void getContainerSize()const;
    virtual void containerContentChanged(int);
    virtual void setItem(int, ContainerItemStack const&);
    ~FilteredContainerModel();
    virtual void refreshContainer(bool);
    virtual bool isExpanableItemFiltered(int)const;
    virtual void getItem(int)const;
    virtual void getFilteredContainerSize()const;
    void _refreshContainer(bool);
//  void setFilteringRule(std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition
    void setFiltering(bool);
    void _init();
    bool isFiltering()const;
    void getIndexForCreativeItem(ContainerItemStack const&)const;
//  FilteredContainerModel(ContainerEnumName, int, ContainerCategory, bool, bool, std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition
    void _getContainerSize()const;
};
