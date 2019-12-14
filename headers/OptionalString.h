#pragma once

class OptionalString {

public:

    void OptionalString(std::string const&);
    void OptionalString(decltype(nullptr));
    void OptionalString(std::string &&);
};
