#pragma once

#include "../json/Value.h"
#include "./Property.h"
#include <memory>
#include <vector>
#include <string>


class JsonValidator {

public:

    void validate(JsonValidator::Property const&, Json::Value const&, std::vector<std::string, std::allocator<std::string>> *);
    void generateDocs(JsonValidator::Property const&);
};
