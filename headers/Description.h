#pragma once

class Description {

public:
    virtual ~Description();
    virtual void deserializeData(Json::Value &);

    void Description(void);
    void Description(Description const&);
    void startParsing(Json::Value &, Json::Value &, char const*);
    void parseDescription(Json::Value &);
    void registerAttributes(void);
    void registerJsonName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void registerProperties(void);
    void registerTriggers(void);
    void registerComponents(void);
    void getId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
