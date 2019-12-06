#pragma once

class AuxDataBlockItem : BlockItem {

public:
    virtual ~AuxDataBlockItem();
    virtual void getLevelDataForAuxValue(int)const;

    void AuxDataBlockItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Block const*);
};
