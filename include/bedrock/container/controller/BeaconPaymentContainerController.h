#pragma once

class BeaconPaymentContainerController : ContainerController {

public:
    virtual BeaconPaymentContainerController::~BeaconPaymentContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    BeaconPaymentContainerController(std::shared_ptr<ContainerModel>);
};