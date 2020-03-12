#pragma once

#include "Item.h"
#include <string>


class CameraItem : Item {

public:
    ~CameraItem();
    CameraItem(std::string const&, int);
};
