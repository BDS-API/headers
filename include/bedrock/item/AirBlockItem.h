#pragma once

#include "./Item.h"
#include <string>


class AirBlockItem : Item {

public:
    virtual ~AirBlockItem();

    AirBlockItem(std::string const&, int);
};
