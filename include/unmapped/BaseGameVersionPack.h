#pragma once

#include "./BaseGameVersionPack.h"


namespace BaseGamePackSlices {

class BaseGameVersionPack {

public:

    ~BaseGameVersionPack();
    BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack &&);
    BaseGameVersionPack(BaseGamePackSlices::BaseGameVersionPack const&);
};

}