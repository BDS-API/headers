#pragma once

class GlassBlock : BlockLegacy {

public:
    virtual ~GlassBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual bool canBeUsedInCommands(bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;

    void GlassBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, bool, bool);
};
