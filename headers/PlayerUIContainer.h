#pragma once

class PlayerUIContainer : SimpleContainer {

public:
    virtual ~PlayerUIContainer();

    void PlayerUIContainer(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, int);
    void save(void);
    void load(ListTag const&, SemVersion const&);
};
