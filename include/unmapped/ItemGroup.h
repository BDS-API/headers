#pragma once

class ItemGroup {

public:

    ItemGroup(void);
    ItemGroup(ItemGroup&&);
    ItemGroup(ItemGroup const&);
    ItemGroup(ItemInstance const&);
    void setCount(int);
    ItemGroup(ItemInstance const&, int);
    void getItemInstance(void)const;
    void getItemType(void)const;
    void getItemTemplate(void)const;
    bool isEmpty(void)const;
    void getCount(void)const;
};
