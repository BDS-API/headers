#pragma once

#include <string>


class OptionalString {

public:
//  OptionalString(decltype(nullptr); //TODO: incomplete function definition
    ~OptionalString();
    OptionalString(std::string const&);
    OptionalString(std::string &&);
};
