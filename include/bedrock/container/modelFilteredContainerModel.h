#pragma once

class FilteredContainerModel : ExpandoContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual FilteredContainerModel::~FilteredContainerModel();
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void getItem(int)const;
    virtual void setItem(int, ContainerItemStack const&);
    virtual bool isExpanableItemFiltered(int)const;
    virtual void refreshContainer(bool);

    FilteredContainerModel(ContainerEnumName, int, ContainerCategory, bool, bool, std::function<FilterResult ()(ContainerItemStack const&)>);
    void _refreshContainer(bool);
    void _init(void);
    void _getContainerSize(void)const;
    void setFilteringRule(std::function<FilterResult ()(ContainerItemStack const&)>);
    bool isFiltering(void)const;
    void setFiltering(bool);
    void getIndexForCreativeItem(ContainerItemStack const&)const;
};
