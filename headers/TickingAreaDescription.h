#pragma once

class TickingAreaDescription {

public:

    void TickingAreaDescription(TickingAreaDescription&&);
    void TickingAreaDescription(TickingAreaDescription const&);
    void TickingAreaDescription(BlockPos const&, unsigned int, std::string const&);
    void TickingAreaDescription(BlockPos const&, BlockPos const&, std::string const&);
};
