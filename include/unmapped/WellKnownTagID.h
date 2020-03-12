#pragma once

#include <string>


class WellKnownTagID {

public:
    WellKnownTagID();
    void init(TagRegistry &, std::string const&);
};
