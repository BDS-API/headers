#pragma once

#include "BlockLegacy.h"
#include "../../unmapped/BaseGameVersion.h"
#include <string>


class CameraBlock : BlockLegacy {

public:
    ~CameraBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    CameraBlock(std::string const&, int);
};
