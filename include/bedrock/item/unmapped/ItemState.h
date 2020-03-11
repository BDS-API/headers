#pragma once

#include "./ItemState.h"
#include <functional>
#include <string>


class ItemState {

public:

    virtual ~ItemState();

    void getID()const;
    void getVariationCount()const;
    std::string getName()const;
    void forEachState(std::function<bool (ItemState const&)>);
    ItemState(unsigned long, std::string const&, unsigned long);
};
