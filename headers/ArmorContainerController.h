#pragma once

class ArmorContainerController : ContainerController {

    virtual void Armor~ArmorContainerController();
    virtual void Armor~ArmorContainerController();
    virtual void ArmorisItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void Armor_canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void Armor_getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void Armor_getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
}
