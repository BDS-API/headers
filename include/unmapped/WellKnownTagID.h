#pragma once

#include <string>
#include "TagRegistry.h"


class WellKnownTagID {

public:
    void init(TagRegistry &, std::string const&);
    WellKnownTagID();
};
