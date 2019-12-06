#pragma once

class CommandRegistry::RegistryState {

public:

    void RegistryState(void);
    void RegistryState(CommandRegistry::RegistryState const&);
    void RegistryState(CommandRegistry::RegistryState&&);
};
