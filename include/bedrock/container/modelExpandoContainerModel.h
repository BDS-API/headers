#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include <functional>
#include "./ContainerModel.h"
#include <string>


class ExpandoContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~ExpandoContainerModel();
    virtual void getContainerSize()const;
    virtual void getFilteredContainerSize()const;
    virtual void getItem(int)const;
    virtual void getItems()const;
    virtual void setItem(int, ContainerItemStack const&);
    virtual void getItemExpandStatus(int)const;
    virtual std::string getItemGroupName(int)const;
    virtual void switchItemExpando(int);
    virtual void refreshContainer(bool);

//  ExpandoContainerModel(ContainerEnumName, int, ContainerCategory); //TODO: incomplete function definition
    void getIndexForCreativeItem(ContainerItemStack const&)const;
    void _init();
    void _refreshContainer(bool);
//  void setOnItemExpandedCallback(std::function<void (std::string const&, int, int)>); //TODO: incomplete function definition
    void _generateCurrentItems();
};
