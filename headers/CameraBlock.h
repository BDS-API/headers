#pragma once

class CameraBlock : BlockLegacy {

public:
    virtual ~CameraBlock();
    virtual bool canBeUsedInCommands(bool)const;

    void CameraBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
