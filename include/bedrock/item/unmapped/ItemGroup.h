#pragma once



class ItemGroup {

public:
    ItemGroup(); // _ZN9ItemGroupC2Ev
    ~ItemGroup(); // _ZN9ItemGroupD2Ev
    ItemGroup(ItemGroup &&); // _ZN9ItemGroupC2EOS_
    ItemGroup(ItemGroup const&); // _ZN9ItemGroupC2ERKS_
    ItemGroup(ItemInstance const&); // _ZN9ItemGroupC2ERK12ItemInstance
    void setCount(int); // _ZN9ItemGroup8setCountEi
    ItemGroup(ItemInstance const&, int); // _ZN9ItemGroupC2ERK12ItemInstancei
    void getItemInstance()const; // _ZNK9ItemGroup15getItemInstanceEv
    void getItemType()const; // _ZNK9ItemGroup11getItemTypeEv
    void getItemTemplate()const; // _ZNK9ItemGroup15getItemTemplateEv
    bool isEmpty()const; // _ZNK9ItemGroup7isEmptyEv
    void getCount()const; // _ZNK9ItemGroup8getCountEv
};
