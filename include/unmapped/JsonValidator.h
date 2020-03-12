#pragma once

#include <vector>
#include "Property.h"
#include <string>
#include "../json/Value.h"


namespace JsonValidator {

    void generateDocs(JsonValidator::Property const&);
    void validate(JsonValidator::Property const&, Json::Value const&, std::vector<std::string> *);
};
