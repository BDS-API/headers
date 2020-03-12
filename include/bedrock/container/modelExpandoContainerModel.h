#pragma once

#include "ContainerModel.h"
#include "../../../unmapped/ContainerItemStack.h"
#include <functional>
#include <string>


class ExpandoContainerModel : ContainerModel {

public:
    virtual void setItem(int, ContainerItemStack const&);
    virtual void getFilteredContainerSize()const;
    ~ExpandoContainerModel();
    virtual void refreshContainer(bool);
    virtual void getItemExpandStatus(int)const;
    virtual void switchItemExpando(int);
    virtual void getItems()const;
    virtual std::string getItemGroupName(int)const;
    virtual void getItem(int)const;
    virtual void containerContentChanged(int);
    virtual void getContainerSize()const;
    void _init();
    void setOnItemExpandedCallback(std::function<void (std::string const&, int, int)>);
    void _generateCurrentItems();
    void _refreshContainer(bool);
    void getIndexForCreativeItem(ContainerItemStack const&)const;
//  ExpandoContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition
};
