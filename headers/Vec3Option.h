#pragma once

class Vec3Option : Option {

public:
    virtual ~Vec3Option();
    virtual void save(std::vector<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    virtual void load(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void load(Json::Value const&);

    void Vec3Option(OptionID, OptionOwnerType, OptionResetFlags, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, glm::tvec3<float, (glm::precision)0> const&);
    void set(glm::tvec3<float, (glm::precision)0> const&, bool);
    void getValue(void)const;
    void getDefault(void)const;
    void reset(void);
};
