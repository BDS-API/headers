#pragma once

class PackError {

public:
    virtual ~PackError();

    void PackError(PackErrorType, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void getErrorValue(void)const;
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void getPackErrorType(void)const;
    void PackError(PackError const&);
};
