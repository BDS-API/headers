#pragma once

class ExpandoContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~ExpandoContainerModel();
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void getItem(int)const;
    virtual void getItems(void)const;
    virtual void setItem(int, ContainerItemStack const&);
    virtual void getItemExpandStatus(int)const;
    virtual void getItemGroupName[abi:cxx11](int)const;
    virtual void switchItemExpando(int);
    virtual void refreshContainer(bool);

    void ExpandoContainerModel(ContainerEnumName, int, ContainerCategory);
    void getIndexForCreativeItem(ContainerItemStack const&)const;
    void _init(void);
    void _refreshContainer(bool);
    void setOnItemExpandedCallback(std::function<void ()(std::string const&, int, int)>);
    void _generateCurrentItems(void);
};
