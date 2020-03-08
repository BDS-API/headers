#pragma once

#include "../../../unmapped/ContainerItemStack"


class ExpandoContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ExpandoContainerModel::~ExpandoContainerModel()
    virtual void getContainerSize()const;
    virtual void getFilteredContainerSize()const;
    virtual void getItem(int)const;
    virtual void getItems()const;
    virtual void setItem(int, ContainerItemStack const&);
    virtual void getItemExpandStatus(int)const;
    virtual void getItemGroupName(int)const;
    virtual void switchItemExpando(int);
    virtual void refreshContainer(bool);

    ExpandoContainerModel(ContainerEnumName, int, ContainerCategory);
    void getIndexForCreativeItem(ContainerItemStack const&)const;
    void _init();
    void _refreshContainer(bool);
    void setOnItemExpandedCallback(std::function<void ()(std::string const&, int, int)>);
    void _generateCurrentItems();
};
