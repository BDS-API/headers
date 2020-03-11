#pragma once

#include "./RegistryState.h"


namespace CommandRegistry {

class RegistryState {

public:

    RegistryState();
    ~RegistryState();
    RegistryState(CommandRegistry::RegistryState const&);
    RegistryState(CommandRegistry::RegistryState &&);
};

}