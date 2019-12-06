#pragma once

class NetworkDebugManager::Tracker {

public:

    void trackSend(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void trackReceive(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
    void update(void);
    void getStats(void)const;
    void Tracker(void);
};
