#pragma once

class JsonValidator {

public:

    void validate(JsonValidator::Property const&, Json::Value const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> *);
    void generateDocs(JsonValidator::Property const&);
};
