#pragma once

class TickingAreaDescription {

public:

    void TickingAreaDescription(TickingAreaDescription&&);
    void TickingAreaDescription(TickingAreaDescription const&);
    void TickingAreaDescription(BlockPos const&, unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void TickingAreaDescription(BlockPos const&, BlockPos const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
