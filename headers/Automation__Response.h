#pragma once

class Automation::Response {

public:

    void Response(Automation::Response::Type, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void requestError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, MCRESULT const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void slashCommand(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void slashCommandInitiated(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void createEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&, Json::Value const&);
    void getType(void)const;
};
