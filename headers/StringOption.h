#pragma once

class StringOption : Option {

public:
    virtual ~StringOption();
    virtual void save(std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void load(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void StringOption(OptionID, OptionOwnerType, OptionResetFlags, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void set(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void setCoerceValueCallback(std::function<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)>);
    void reset(void);
};
