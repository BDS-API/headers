#pragma once



class EnvironmentRequirement {

public:
    EnvironmentRequirement(EnvironmentRequirement const&);
    EnvironmentRequirement();
    EnvironmentRequirement(EnvironmentRequirement &&);
    ~EnvironmentRequirement();
};
