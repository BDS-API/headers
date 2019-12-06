#pragma once

class ActorMapping {

public:

    void ActorMapping(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getCanonicalName(void)const;
    void ActorMapping(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ActorMapping(ActorMapping&&);
    void ActorMapping(ActorMapping const&);
};
