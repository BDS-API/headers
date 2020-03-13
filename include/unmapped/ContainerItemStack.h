#pragma once



class ContainerItemStack {

public:
    static long EMPTY_ITEM;

    ~ContainerItemStack(); // _ZN18ContainerItemStackD2Ev
    ContainerItemStack(); // _ZN18ContainerItemStackC2Ev
    ContainerItemStack(ItemStack const&); // _ZN18ContainerItemStackC2ERK9ItemStack
    ContainerItemStack(ItemInstance const&); // _ZN18ContainerItemStackC2ERK12ItemInstance
    void operator-(ContainerItemStack const&); // _ZN18ContainerItemStackmiERKS_
    bool isEmpty()const; // _ZNK18ContainerItemStack7isEmptyEv
    void decreaseCount(int); // _ZN18ContainerItemStack13decreaseCountEi
    void getCount()const; // _ZNK18ContainerItemStack8getCountEv
    void operator+(ContainerItemStack const&); // _ZN18ContainerItemStackplERKS_
    void increaseCount(int); // _ZN18ContainerItemStack13increaseCountEi
    void operator==(ContainerItemStack const&)const; // _ZNK18ContainerItemStackeqERKS_
    void matches(ContainerItemStack const&)const; // _ZNK18ContainerItemStack7matchesERKS_
    void operator!=(ContainerItemStack const&)const; // _ZNK18ContainerItemStackneERKS_
    void operator==(ItemStack const&)const; // _ZNK18ContainerItemStackeqERK9ItemStack
    void operator!=(ItemStack const&)const; // _ZNK18ContainerItemStackneERK9ItemStack
    void operator==(ItemInstance const&)const; // _ZNK18ContainerItemStackeqERK12ItemInstance
    void operator!=(ItemInstance const&)const; // _ZNK18ContainerItemStackneERK12ItemInstance
    void getItem()const; // _ZNK18ContainerItemStack7getItemEv
    void getId()const; // _ZNK18ContainerItemStack5getIdEv
    void getAuxValue()const; // _ZNK18ContainerItemStack11getAuxValueEv
    void setAuxValue(short); // _ZN18ContainerItemStack11setAuxValueEs
    void getDamageValue()const; // _ZNK18ContainerItemStack14getDamageValueEv
    void setDamageValue(short); // _ZN18ContainerItemStack14setDamageValueEs
    void getIdAux()const; // _ZNK18ContainerItemStack8getIdAuxEv
    void getIdAuxEnchanted()const; // _ZNK18ContainerItemStack17getIdAuxEnchantedEv
    bool isNull()const; // _ZNK18ContainerItemStack6isNullEv
    void setNull(); // _ZN18ContainerItemStack7setNullEv
    void forceSetCount(int); // _ZN18ContainerItemStack13forceSetCountEi
    void getStackSize()const; // _ZNK18ContainerItemStack12getStackSizeEv
    void setStackSize(unsigned char); // _ZN18ContainerItemStack12setStackSizeEh
    void getMaxStackSize()const; // _ZNK18ContainerItemStack15getMaxStackSizeEv
    void getItemStack()const; // _ZNK18ContainerItemStack12getItemStackEv
    void getItemInstance()const; // _ZNK18ContainerItemStack15getItemInstanceEv
    bool matchesItem(ContainerItemStack const&)const; // _ZNK18ContainerItemStack11matchesItemERKS_
    void getDescriptor()const; // _ZNK18ContainerItemStack13getDescriptorEv
    bool hasUserData()const; // _ZNK18ContainerItemStack11hasUserDataEv
    void getUserData()const; // _ZNK18ContainerItemStack11getUserDataEv
    void getColor()const; // _ZNK18ContainerItemStack8getColorEv
    void getItemStack(); // _ZN18ContainerItemStack12getItemStackEv
    void getItemInstance(); // _ZN18ContainerItemStack15getItemInstanceEv
    bool asItemStack()const; // _ZNK18ContainerItemStack11asItemStackEv
    bool asItemInstance()const; // _ZNK18ContainerItemStack14asItemInstanceEv
    ContainerItemStack(ContainerItemStack const&); // _ZN18ContainerItemStackC2ERKS_
    ContainerItemStack(ContainerItemStack &&); // _ZN18ContainerItemStackC2EOS_
};
