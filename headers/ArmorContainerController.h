#pragma once

class ArmorContainerController : ContainerController {

public:
    virtual ~ArmorContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    void ArmorContainerController(std::shared_ptr<ContainerModel>);
};
