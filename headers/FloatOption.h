#pragma once

class FloatOption : Option {

public:
    virtual ~FloatOption();
    virtual void save(std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void load(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);

    void FloatOption(OptionID, OptionOwnerType, OptionResetFlags, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, float, float, float);
    void set(float, bool);
    void getValue(void)const;
    void getDefault(void)const;
    void reset(void);
};
