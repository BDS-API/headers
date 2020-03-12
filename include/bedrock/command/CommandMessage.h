#pragma once

#include "origin/CommandOrigin.h"
#include "../actor/Actor.h"
#include <string>
#include <memory>


class CommandMessage {

public:
    class MessageComponent;

    CommandMessage();
    std::string getMessage(CommandOrigin const&)const;
    ~CommandMessage();
    class MessageComponent {

    public:
//      MessageComponent(std::unique_ptr<CommandSelector<Actor>> &&); //TODO: incomplete function definition
        MessageComponent(std::string &&);
        MessageComponent(CommandMessage::MessageComponent &&);
        ~MessageComponent();
    };
};
