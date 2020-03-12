#pragma once

#include <string>
#include "BlockLegacy.h"


class CameraBlock : BlockLegacy {

public:
    ~CameraBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    CameraBlock(std::string const&, int);
};
