#pragma once

#include "../bedrock/actor/Actor.h"
#include <memory>
#include "./MessageComponent.h"
#include <string>


namespace CommandMessage {

class MessageComponent {

public:

    MessageComponent(std::string &&);
//  MessageComponent(std::unique_ptr<CommandSelector<Actor>, std::default_delete<CommandSelector<Actor>>> &&); //TODO: incomplete function definition
    MessageComponent(CommandMessage::MessageComponent &&);
    ~MessageComponent();
};

}