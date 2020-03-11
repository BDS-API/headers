#pragma once

#include "./BlockDefinition.h"
#include <string>


class BlockDefinition {

public:

    void getComponentDescription(std::string const&)const;
    BlockDefinition();
    ~BlockDefinition();
    BlockDefinition(BlockDefinition const&);
};
