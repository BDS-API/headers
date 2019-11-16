#pragma once

class EnchantingInputContainerController : ContainerController {

    virtual void EnchantingInput~EnchantingInputContainerController();
    virtual void EnchantingInput~EnchantingInputContainerController();
    virtual void EnchantingInputisItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void EnchantingInputisItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void EnchantingInput_canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void EnchantingInput_getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void EnchantingInput_getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
}
