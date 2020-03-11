#pragma once

#include <string>


class OptionalString {

public:

    OptionalString(std::string const&);
//  OptionalString(decltype(nullptr); //TODO: incomplete function definition
    ~OptionalString();
    OptionalString(std::string &&);
};
