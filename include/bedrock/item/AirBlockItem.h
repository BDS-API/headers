#pragma once

#include "Item.h"
#include <string>


class AirBlockItem : Item {

public:
    ~AirBlockItem();
    AirBlockItem(std::string const&, int);
};
