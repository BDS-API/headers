#pragma once

class WorkbenchBlock : BlockLegacy {

public:
    virtual ~WorkbenchBlock();
    virtual bool isCraftingBlock(void)const;
    virtual void use(Player &, BlockPos const&)const;

    void WorkbenchBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
};
