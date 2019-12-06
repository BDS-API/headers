#pragma once

class CommandPropertyBag {

public:
    virtual ~CommandPropertyBag();

    void CommandPropertyBag(void);
    void CommandPropertyBag(Json::Value const&);
    void clone(void)const;
    void set(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void set(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&);
    void set(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Vec3);
    void addToResultList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
