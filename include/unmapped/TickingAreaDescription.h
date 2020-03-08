#pragma once

#include "../bedrock/util/BlockPos"


class TickingAreaDescription {

public:

    TickingAreaDescription(TickingAreaDescription&&);
    TickingAreaDescription(TickingAreaDescription const&);
    TickingAreaDescription(BlockPos const&, unsigned int, std::string const&);
    TickingAreaDescription(BlockPos const&, BlockPos const&, std::string const&);
};
