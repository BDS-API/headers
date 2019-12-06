#pragma once

class CommandRegistry::ConstrainedValue {

public:

    void ConstrainedValue(std::pair<unsigned long, unsigned int> const&);
    void ConstrainedValue(CommandRegistry::ConstrainedValue&&);
};
