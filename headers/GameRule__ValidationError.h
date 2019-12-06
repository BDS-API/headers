#pragma once

class GameRule::ValidationError {

public:

    void setSuccess(bool);
    void setDescription(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ValidationError(void);
    bool isSuccess(void)const;
};
