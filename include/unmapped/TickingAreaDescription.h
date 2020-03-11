#pragma once

#include "./TickingAreaDescription.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


class TickingAreaDescription {

public:

    ~TickingAreaDescription();
    TickingAreaDescription(TickingAreaDescription &&);
    TickingAreaDescription(TickingAreaDescription const&);
    TickingAreaDescription(BlockPos const&, unsigned int, std::string const&);
    TickingAreaDescription(BlockPos const&, BlockPos const&, std::string const&);
    std::string asString()const;
};
