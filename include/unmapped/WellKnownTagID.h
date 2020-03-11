#pragma once

#include "./TagRegistry.h"
#include <string>


class WellKnownTagID {

public:

    void init(TagRegistry &, std::string const&);
    WellKnownTagID();
};
