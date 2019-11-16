#pragma once

class BeaconPaymentContainerController : ContainerController {

    virtual void BeaconPayment~BeaconPaymentContainerController();
    virtual void BeaconPayment~BeaconPaymentContainerController();
    virtual void BeaconPaymentisItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void BeaconPaymentisItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void BeaconPayment_canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void BeaconPayment_getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void BeaconPayment_getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
}
