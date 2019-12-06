#pragma once

class MaterialReducerInputContainerController : ContainerController {

public:
    virtual ~MaterialReducerInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    void MaterialReducerInputContainerController(std::shared_ptr<ContainerModel>);
    void setEnabled(bool);
};
