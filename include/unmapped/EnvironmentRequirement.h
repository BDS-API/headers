#pragma once



class EnvironmentRequirement {

public:
    ~EnvironmentRequirement();
    EnvironmentRequirement();
    EnvironmentRequirement(EnvironmentRequirement &&);
    EnvironmentRequirement(EnvironmentRequirement const&);
};
