#pragma once

class Automation::MessageHeader {

public:

    void MessageHeader(void);
    void MessageHeader(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Automation::MessagePurpose, int);
    void serialize(void)const;
    void deserialize(Json::Value &, Automation::MessageHeader&);
};
