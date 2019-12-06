#pragma once

class JsonValidator::Property {

public:

    void Property(JsonValidator::Property&&);
    void Property(void);
    void Property(JsonValidator::Property const&);
    void addType(Json::ValueType);
    void addConditionalProperty(Json::Value const&, JsonValidator::Property const&);
    void addConditionalProperty(Json::ValueType, JsonValidator::Property const&);
    void description(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void required(void);
    void requireConditionalProperty(void);
    void addChildProperty(JsonValidator::Property const&);
};
