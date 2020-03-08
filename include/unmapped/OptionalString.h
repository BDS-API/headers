#pragma once



class OptionalString {

public:

    OptionalString(std::string const&);
    OptionalString(decltype(nullptr));
    OptionalString(std::string &&);
};
