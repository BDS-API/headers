#pragma once

#include <string>
#include "BlockLegacy.h"


class CameraBlock : public BlockLegacy {

public:
    virtual ~CameraBlock(); // _ZN11CameraBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const; // _ZNK11CameraBlock19canBeUsedInCommandsEbRK15BaseGameVersion
    CameraBlock(std::string const&, int); // _ZN11CameraBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
