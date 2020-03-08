#pragma once

#include "../ItemInstance"


class ItemGroup {

public:

    ItemGroup(void);
    ItemGroup(ItemGroup&&);
    ItemGroup(ItemGroup const&);
    ItemGroup(ItemInstance const&);
    void setCount(int);
    ItemGroup(ItemInstance const&, int);
    void getItemInstance()const;
    void getItemType()const;
    void getItemTemplate()const;
    bool isEmpty()const;
    void getCount()const;
};
