#pragma once

#include "../ItemInstance.h"


class ItemGroup {

public:
    ~ItemGroup();
    ItemGroup(ItemGroup &&);
    bool isEmpty()const;
    ItemGroup(ItemInstance const&);
    void getItemTemplate()const;
    void getItemInstance()const;
    ItemGroup();
    ItemGroup(ItemGroup const&);
    void setCount(int);
    ItemGroup(ItemInstance const&, int);
    void getItemType()const;
    void getCount()const;
};
