#pragma once

class CommandRegistry::Overload {

public:

    void Overload(CommandRegistry::Overload&&);
    void Overload(CommandVersion, std::unique_ptr<Command, std::default_delete<Command>> (*)(void));
};
