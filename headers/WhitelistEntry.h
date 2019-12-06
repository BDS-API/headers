#pragma once

class WhitelistEntry : IJsonSerializable {

public:
    virtual ~WhitelistEntry();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);

    void WhitelistEntry(WhitelistEntry const&);
    void WhitelistEntry(WhitelistEntry&&);
    void WhitelistEntry(Json::Value &);
    void WhitelistEntry(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, mce::UUID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, bool);
    void WhitelistEntry(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
};
