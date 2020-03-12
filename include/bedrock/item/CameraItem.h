#pragma once

#include <string>
#include "Item.h"


class CameraItem : Item {

public:
    ~CameraItem();
    CameraItem(std::string const&, int);
};
