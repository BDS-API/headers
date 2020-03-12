#pragma once



class ContainerItemStack {

public:
    static long EMPTY_ITEM;

    void getColor()const;
    void decreaseCount(int);
    void setAuxValue(short);
    void getItemStack()const;
    ContainerItemStack(ContainerItemStack const&);
    ContainerItemStack(ItemInstance const&);
    void getMaxStackSize()const;
    bool matchesItem(ContainerItemStack const&)const;
    ContainerItemStack(ContainerItemStack &&);
    void operator==(ItemInstance const&)const;
    ContainerItemStack(ItemStack const&);
    void getUserData()const;
    void operator!=(ItemStack const&)const;
    bool isEmpty()const;
    void operator==(ItemStack const&)const;
    void operator!=(ItemInstance const&)const;
    void getItem()const;
    bool isNull()const;
    void getItemInstance()const;
    void getDamageValue()const;
    void getStackSize()const;
    void getCount()const;
    void operator-(ContainerItemStack const&);
    void setDamageValue(short);
    ContainerItemStack();
    void forceSetCount(int);
    void matches(ContainerItemStack const&)const;
    void increaseCount(int);
    void setStackSize(unsigned char);
    void operator==(ContainerItemStack const&)const;
    void operator!=(ContainerItemStack const&)const;
    void getIdAuxEnchanted()const;
    void setNull();
    ~ContainerItemStack();
    void getItemStack();
    void getId()const;
    void getDescriptor()const;
    void getIdAux()const;
    bool asItemStack()const;
    void getItemInstance();
    bool asItemInstance()const;
    bool hasUserData()const;
    void getAuxValue()const;
    void operator+(ContainerItemStack const&);
};
