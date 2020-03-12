#pragma once

#include <string>


class OptionalString {

public:
//  OptionalString(decltype(nullptr); //TODO: incomplete function definition
    OptionalString(std::string const&);
    ~OptionalString();
    OptionalString(std::string &&);
};
