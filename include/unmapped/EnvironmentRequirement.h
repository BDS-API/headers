#pragma once

#include "./EnvironmentRequirement.h"


class EnvironmentRequirement {

public:

    EnvironmentRequirement();
    ~EnvironmentRequirement();
    EnvironmentRequirement(EnvironmentRequirement const&);
    EnvironmentRequirement(EnvironmentRequirement &&);
};
