#pragma once

class CameraBlock : BlockLegacy {

public:
    virtual ~CameraBlock();
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;

    void CameraBlock(std::string const&, int);
};
