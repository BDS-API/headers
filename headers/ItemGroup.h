#pragma once

class ItemGroup {

public:

    void ItemGroup(void);
    void ItemGroup(ItemGroup&&);
    void ItemGroup(ItemGroup const&);
    void ItemGroup(ItemInstance const&);
    void setCount(int);
    void ItemGroup(ItemInstance const&, int);
    void getItemInstance(void)const;
    void getItemType(void)const;
    void getItemTemplate(void)const;
    bool isEmpty(void)const;
    void getCount(void)const;
};
