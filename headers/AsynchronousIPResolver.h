#pragma once

class AsynchronousIPResolver {

public:

    void AsynchronousIPResolver(AsynchronousIPResolver const&);
    void AsynchronousIPResolver(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void _resolve(void);
    bool isDone(void)const;
};
