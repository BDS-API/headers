#pragma once



class ItemGroup {

public:
    ItemGroup(ItemInstance const&, int);
    bool isEmpty()const;
    ~ItemGroup();
    ItemGroup(ItemGroup &&);
    void getItemTemplate()const;
    void getCount()const;
    ItemGroup(ItemInstance const&);
    ItemGroup(ItemGroup const&);
    void getItemInstance()const;
    ItemGroup();
    void setCount(int);
    void getItemType()const;
};
