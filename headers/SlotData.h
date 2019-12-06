#pragma once

class SlotData {

public:
    static long SlotData::UNKNOWN_LOCATION;


    void SlotData(SlotData&&);
    void SlotData(SlotData const&);
    void SlotData(void);
    void SlotData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &&, int);
    void SlotData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void set(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
    void clear(void);
    bool isActive(void)const;
};
