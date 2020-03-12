#pragma once

#include <string>
#include "ContainerModel.h"
#include <functional>


class ExpandoContainerModel : ContainerModel {

public:
    virtual void setItem(int, ContainerItemStack const&);
    virtual void refreshContainer(bool);
    ~ExpandoContainerModel();
    virtual void getItem(int)const;
    virtual void getContainerSize()const;
    virtual void getFilteredContainerSize()const;
    virtual void containerContentChanged(int);
    virtual void getItems()const;
    virtual void switchItemExpando(int);
    virtual std::string getItemGroupName(int)const;
    virtual void getItemExpandStatus(int)const;
//  ExpandoContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition
    void _init();
    void setOnItemExpandedCallback(std::function<void (std::string const&, int, int)>);
    void _refreshContainer(bool);
    void _generateCurrentItems();
    void getIndexForCreativeItem(ContainerItemStack const&)const;
};
