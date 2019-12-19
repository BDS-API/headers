#pragma once

using namespace CommandRegistry;

class RegistryState {

public:

    RegistryState(void);
    RegistryState(CommandRegistry::RegistryState const&);
    RegistryState(CommandRegistry::RegistryState&&);
};
