#pragma once

#include <string>


class BlockDefinition {

public:
    BlockDefinition(BlockDefinition const&);
    void getComponentDescription(std::string const&)const;
    BlockDefinition();
    ~BlockDefinition();
};
