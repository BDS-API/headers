#pragma once

#include <string>
#include "../bedrock/util/BlockPos.h"


class TickingAreaDescription {

public:
    TickingAreaDescription(TickingAreaDescription &&);
    std::string asString()const;
    ~TickingAreaDescription();
    TickingAreaDescription(BlockPos const&, unsigned int, std::string const&);
    TickingAreaDescription(TickingAreaDescription const&);
    TickingAreaDescription(BlockPos const&, BlockPos const&, std::string const&);
};
