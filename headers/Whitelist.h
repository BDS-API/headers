#pragma once

class Whitelist : IJsonSerializable {

public:
    virtual ~Whitelist();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);

    void Whitelist(std::function<void ()(void)>);
    bool isAllowed(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isIgnoringPlayerLimit(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void clear(void);
    void getEntries(void)const;
    void addEntry(WhitelistEntry const&);
    void removeByName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void tryUpdateEntries(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
