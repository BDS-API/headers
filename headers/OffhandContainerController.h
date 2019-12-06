#pragma once

class OffhandContainerController : ContainerController {

public:
    virtual ~OffhandContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;

    void OffhandContainerController(std::shared_ptr<ContainerModel>);
};
