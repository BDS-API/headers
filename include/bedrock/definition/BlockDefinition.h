#pragma once

#include <string>


class BlockDefinition {

public:
    BlockDefinition(BlockDefinition const&);
    ~BlockDefinition();
    void getComponentDescription(std::string const&)const;
    BlockDefinition();
};
