#pragma once

#include "../json/Value"


class JsonValidator {

public:

    void validate(JsonValidator::Property const&, Json::Value const&, std::vector<std::string, std::allocator<std::string>> *);
    void generateDocs(JsonValidator::Property const&);
};
