#pragma once

class Automation::AutomationSession {

public:

    void connect(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isReady(void);
    bool isConnecting(void);
};
