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
    bool isEmpty()const;
    void decreaseCount(int);
    void getCount()const;
    void increaseCount(int);
    void matches(ContainerItemStack const&)const;
    void getItem()const;
    void getId()const;
    void getAuxValue()const;
    void setAuxValue(short);
    void getDamageValue()const;
    void setDamageValue(short);
    void getIdAux()const;
    void getIdAuxEnchanted()const;
    bool isNull()const;
    void setNull();
    void forceSetCount(int);
    void getStackSize()const;
    void setStackSize(unsigned char);
    void getMaxStackSize()const;
    void getItemStack()const;
    void getItemInstance()const;
    bool matchesItem(ContainerItemStack const&)const;
    void getDescriptor()const;
    bool hasUserData()const;
    void getUserData()const;
    void getColor()const;
    void getItemStack();
    void getItemInstance();
    bool asItemStack()const;
    bool asItemInstance()const;
    ContainerItemStack(ContainerItemStack const&);
    ContainerItemStack(ContainerItemStack&&);
};
