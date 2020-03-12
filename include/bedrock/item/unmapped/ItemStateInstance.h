#pragma once

#include "ItemState.h"


class ItemStateInstance {

public:
    ItemStateInstance();
    void initState(unsigned int &, unsigned int, unsigned int, ItemState const&);
    void getState()const;
    bool isInitialized()const;
    void getMask()const;
    bool isValidData(unsigned int)const;
};
