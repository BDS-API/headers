#pragma once

class RoleChecker {

public:

    void RoleChecker(void);
    void lookupInProgress(void)const;
    void checkRole(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<void ()(ADRole, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)>);
};
