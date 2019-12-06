#pragma once

class CompoundTagEditHelper {

public:

    void CompoundTagEditHelper(Tag &);
    void replaceWith(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unique_ptr<Tag, std::default_delete<Tag>>);
    void pushChild(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void popChild(void);
    bool canPopChild(void);
    void getParent(void)const;
};
