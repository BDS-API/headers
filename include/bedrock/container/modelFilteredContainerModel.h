#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include <functional>
#include "./ExpandoContainerModel.h"


class FilteredContainerModel : ExpandoContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~FilteredContainerModel();
    virtual void getContainerSize()const;
    virtual void getFilteredContainerSize()const;
    virtual void getItem(int)const;
    virtual void setItem(int, ContainerItemStack const&);
    virtual bool isExpanableItemFiltered(int)const;
    virtual void refreshContainer(bool);

//  FilteredContainerModel(ContainerEnumName, int, ContainerCategory, bool, bool, std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition
    void _refreshContainer(bool);
    void _init();
    void _getContainerSize()const;
//  void setFilteringRule(std::function<FilterResult (ContainerItemStack const&)>); //TODO: incomplete function definition
    bool isFiltering()const;
    void setFiltering(bool);
    void getIndexForCreativeItem(ContainerItemStack const&)const;
};
