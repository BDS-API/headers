#pragma once

class MaterialReducerInputContainerController : ContainerController {

    virtual void MaterialReducerInput~MaterialReducerInputContainerController();
    virtual void MaterialReducerInput~MaterialReducerInputContainerController();
    virtual void MaterialReducerInputisItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void MaterialReducerInput_canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void MaterialReducerInput_getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void MaterialReducerInput_getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
}
