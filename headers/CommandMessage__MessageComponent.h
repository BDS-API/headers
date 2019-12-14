#pragma once

class CommandMessage::MessageComponent {

public:

    void MessageComponent(std::string &&);
    void MessageComponent(std::unique_ptr<CommandSelector<Actor>, std::default_delete<CommandSelector<Actor>>> &&);
    void MessageComponent(CommandMessage::MessageComponent&&);
};
