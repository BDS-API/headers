#pragma once

class ContainerModel : ContainerContentChangeListener {

public:
    virtual void containerContentChanged(int);
    virtual ContainerModel::~ContainerModel();
    virtual void postInit(void);
    virtual void releaseResources(void);
    virtual void getContainerSize(void)const;
    virtual void getFilteredContainerSize(void)const;
    virtual void tick(int);
    virtual void getItem(int)const;
    virtual void getItems(void)const;
    virtual void getItemInstances(void);
    virtual void setItem(int, ContainerItemStack const&);
    virtual bool isValid(void);
    virtual bool isItemFiltered(ContainerItemStack const&)const;
    virtual bool isExpanableItemFiltered(int)const;
    virtual void getItemExpandStatus(int)const;
    virtual void getItemGroupName[abi:cxx11](int)const;
    virtual void switchItemExpando(int);
    virtual void _getContainerOffset(void)const;
    virtual void _onItemChanged(int, ItemStack const&, ItemStack const&);

    ContainerModel(ContainerEnumName, int, ContainerCategory);
    void resize(int);
    void _init(void);
    void registerOnContainerChangedCallback(std::function<void ()(int, ItemStack const&, ItemStack const&)>);
    void registerPlayerNotificationCallback(std::function<void ()(int, ItemStack const&, ItemStack const&)>);
    void getContainerEnumName(void)const;
    bool isIntermediaryCategory(void)const;
    void _notifyPlayer(int, ItemStack const&, ItemStack const&);
    void networkUpdateItem(int, ItemStack const&, ItemStack const&);
    void getContainerCategory(void)const;
    void setContainerCategory(ContainerCategory);
    void setItemSource(int, SlotData const&);
    void getItemSource(int)const;
    void getItemCount(ItemDescriptor const&);
};
