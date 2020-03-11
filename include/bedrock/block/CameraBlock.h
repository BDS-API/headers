#pragma once

#include "../../unmapped/BaseGameVersion.h"
#include "./BlockLegacy.h"
#include <string>


class CameraBlock : BlockLegacy {

public:
    virtual ~CameraBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;

    CameraBlock(std::string const&, int);
};
