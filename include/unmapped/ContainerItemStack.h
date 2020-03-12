#pragma once

#include "../bedrock/item/ItemInstance.h"
#include "../bedrock/item/ItemStack.h"


class ContainerItemStack {

public:
    static long EMPTY_ITEM;

    void getItemStack()const;
    void operator==(ItemInstance const&)const;
    void operator!=(ItemInstance const&)const;
    void getDamageValue()const;
    bool isNull()const;
    bool asItemStack()const;
    void operator!=(ContainerItemStack const&)const;
    void forceSetCount(int);
    void operator==(ItemStack const&)const;
    void decreaseCount(int);
    bool isEmpty()const;
    bool hasUserData()const;
    void getDescriptor()const;
    void operator+(ContainerItemStack const&);
    ContainerItemStack(ContainerItemStack &&);
    ContainerItemStack(ItemInstance const&);
    void getItem()const;
    void operator==(ContainerItemStack const&)const;
    void setDamageValue(short);
    void getId()const;
    ContainerItemStack(ItemStack const&);
    void setAuxValue(short);
    void matches(ContainerItemStack const&)const;
    void getColor()const;
    void operator!=(ItemStack const&)const;
    ContainerItemStack(ContainerItemStack const&);
    void getItemInstance();
    bool matchesItem(ContainerItemStack const&)const;
    void operator-(ContainerItemStack const&);
    void setNull();
    void getAuxValue()const;
    void getItemStack();
    void getCount()const;
    ~ContainerItemStack();
    void getItemInstance()const;
    void getUserData()const;
    void setStackSize(unsigned char);
    void getMaxStackSize()const;
    void getIdAuxEnchanted()const;
    void increaseCount(int);
    ContainerItemStack();
    bool asItemInstance()const;
    void getStackSize()const;
    void getIdAux()const;
};
