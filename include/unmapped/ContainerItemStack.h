#pragma once

#include "../bedrock/item/ItemStack.h"
#include "./ContainerItemStack.h"
#include "../bedrock/item/ItemInstance.h"


class ContainerItemStack {

public:
    static long EMPTY_ITEM;


    ~ContainerItemStack();
    ContainerItemStack();
    ContainerItemStack(ItemStack const&);
    ContainerItemStack(ItemInstance const&);
    void operator-(ContainerItemStack const&);
    bool isEmpty()const;
    void decreaseCount(int);
    void getCount()const;
    void operator+(ContainerItemStack const&);
    void increaseCount(int);
    void operator==(ContainerItemStack const&)const;
    void matches(ContainerItemStack const&)const;
    void operator!=(ContainerItemStack const&)const;
    void operator==(ItemStack const&)const;
    void operator!=(ItemStack const&)const;
    void operator==(ItemInstance const&)const;
    void operator!=(ItemInstance const&)const;
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
    ContainerItemStack(ContainerItemStack &&);
};
