#pragma once

class CameraBlock : BlockLegacy {

public:
    virtual CameraBlock::~CameraBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;

    CameraBlock(std::string const&, int);
};
