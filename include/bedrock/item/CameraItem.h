#pragma once

#include "./Item.h"
#include <string>


class CameraItem : Item {

public:
    virtual ~CameraItem();

    CameraItem(std::string const&, int);
};
