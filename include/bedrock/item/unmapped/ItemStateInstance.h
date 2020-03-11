#pragma once

#include "./ItemState.h"


class ItemStateInstance {

public:

    void getMask()const;
    void getState()const;
    ItemStateInstance();
    void initState(unsigned int &, unsigned int, unsigned int, ItemState const&);
    bool isInitialized()const;
    bool isValidData(unsigned int)const;
};
