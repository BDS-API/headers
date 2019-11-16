#pragma once

class HorseEquipContainerController : ContainerController {

    virtual void HorseEquip~HorseEquipContainerController();
    virtual void HorseEquip~HorseEquipContainerController();
    virtual void isItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void HorseEquip_canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void HorseEquip_getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void HorseEquip_getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
}
