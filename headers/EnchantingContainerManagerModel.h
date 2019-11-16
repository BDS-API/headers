#pragma once

class EnchantingContainerManagerModel : ContainerManagerModel {

    virtual void Enchanting~EnchantingContainerManagerModel();
    virtual void Enchanting~EnchantingContainerManagerModel();
    virtual void getContainerId(void)const;
    virtual void setContainerId(ContainerID);
    virtual void getContainerType(void)const;
    virtual void setContainerType(ContainerType);
    virtual void EnchantinggetItems(void);
    virtual void EnchantingsetSlot(int, ContainerItemStack const&, bool);
    virtual void EnchantinggetSlot(int);
    virtual void EnchantingsetData(int, int);
    virtual void EnchantingbroadcastChanges(void);
    virtual void Enchantinginit(void);
    virtual void isValid(float);
}
