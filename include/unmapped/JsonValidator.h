#pragma once

#include <vector>


namespace JsonValidator {

    void generateDocs(JsonValidator::Property const&);
    void validate(JsonValidator::Property const&, Json::Value const&, std::vector<std::string> *);
};
