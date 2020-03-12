#pragma once

#include <string>


class TickingAreaDescription {

public:
    std::string asString()const;
    TickingAreaDescription(TickingAreaDescription &&);
    ~TickingAreaDescription();
    TickingAreaDescription(TickingAreaDescription const&);
    TickingAreaDescription(BlockPos const&, unsigned int, std::string const&);
    TickingAreaDescription(BlockPos const&, BlockPos const&, std::string const&);
};
