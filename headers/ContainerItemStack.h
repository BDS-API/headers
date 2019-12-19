#pragma once

class ContainerItemStack {

public:
    static long EMPTY_ITEM;


    void ContainerItemStack(void);
    void ContainerItemStack(ItemStack const&);
    void ContainerItemStack(ItemInstance const&);
    void operator-(ContainerItemStack const&);
    bool isEmpty(void)const;
    void decreaseCount(int);
    void getCount(void)const;
    void increaseCount(int);
    void matches(ContainerItemStack const&)const;
    void getItem(void)const;
    void getId(void)const;
    void getAuxValue(void)const;
    void setAuxValue(short);
    void getDamageValue(void)const;
    void setDamageValue(short);
    void getIdAux(void)const;
    void getIdAuxEnchanted(void)const;
    bool isNull(void)const;
    void setNull(void);
    void forceSetCount(int);
    void getStackSize(void)const;
    void setStackSize(unsigned char);
    void getMaxStackSize(void)const;
    void getItemStack(void)const;
    void getItemInstance(void)const;
    void matchesItem(ContainerItemStack const&)const;
    void getDescriptor(void)const;
    bool hasUserData(void)const;
    void getUserData(void)const;
    void getColor(void)const;
    void getItemStack(void);
    void getItemInstance(void);
    void asItemStack(void)const;
    void asItemInstance(void)const;
    void ContainerItemStack(ContainerItemStack const&);
    void ContainerItemStack(ContainerItemStack&&);
};
