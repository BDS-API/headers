#pragma once

class UIPackError : PackError {

public:
    virtual ~UIPackError();

    void UIPackError(void);
    void UIPackError(UIPackErrorType, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
};
