#pragma once

#include <string>
#include "Item.h"


class AirBlockItem : Item {

public:
    ~AirBlockItem();
    AirBlockItem(std::string const&, int);
};
