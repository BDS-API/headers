#pragma once

#include <string>
#include "BaseRailBlock.h"


class RailBlock : public BaseRailBlock {

public:
    virtual ~RailBlock(); // _ZN9RailBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual void getVariant(Block const&)const; // _ZNK9RailBlock10getVariantERK5Block
    RailBlock(std::string const&, int); // _ZN9RailBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
