#pragma once

class FurnaceFuelContainerController : ContainerController {

    virtual void FurnaceFuel~FurnaceFuelContainerController();
    virtual void FurnaceFuel~FurnaceFuelContainerController();
    virtual void FurnaceFuelisItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void FurnaceFuel_getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void FurnaceFuel_getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
}
