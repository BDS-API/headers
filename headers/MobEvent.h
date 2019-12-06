#pragma once

class MobEvent {

public:

    void MobEvent(void);
    void MobEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool);
    bool isEnabled(void)const;
    void setEnabled(bool);
    bool hasDefaultSet(void)const;
};
