#pragma once

#include "../bedrock/item/ItemInstance"
#include "../bedrock/item/ItemStack"


class ContainerItemStack {

public:
    static long EMPTY_ITEM;


    ContainerItemStack(void);
    ContainerItemStack(ItemStack const&);
    ContainerItemStack(ItemInstance const&);
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
    bool matchesItem(ContainerItemStack const&)const;
    void getDescriptor(void)const;
    bool hasUserData(void)const;
    void getUserData(void)const;
    void getColor(void)const;
    void getItemStack(void);
    void getItemInstance(void);
    bool asItemStack(void)const;
    bool asItemInstance(void)const;
    ContainerItemStack(ContainerItemStack const&);
    ContainerItemStack(ContainerItemStack&&);
};
