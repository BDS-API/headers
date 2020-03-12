#pragma once

#include <memory>
#include <string>


class CommandMessage {

public:
    class MessageComponent;

    ~CommandMessage();
    std::string getMessage(CommandOrigin const&)const;
    CommandMessage();
    class MessageComponent {

    public:
        MessageComponent(CommandMessage::MessageComponent &&);
        MessageComponent(std::string &&);
        ~MessageComponent();
        MessageComponent(std::unique_ptr<CommandSelector<Actor>> &&);
    };
};
