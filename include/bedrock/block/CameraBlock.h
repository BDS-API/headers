#pragma once

#include <string>
#include "BlockLegacy.h"


class CameraBlock : BlockLegacy {

public:
    ~CameraBlock(); // _ZN11CameraBlockD2Ev
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK11CameraBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    CameraBlock(std::string const&, int); // _ZN11CameraBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
