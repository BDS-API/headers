#pragma once

class ExpandoModelElement {

public:

    void ExpandoModelElement(ContainerItemStack const&, ContainerExpandStatus, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ExpandoModelElement(ExpandoModelElement&&);
    void ExpandoModelElement(ExpandoModelElement const&);
};
