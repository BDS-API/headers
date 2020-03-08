#pragma once

#include "../bedrock/actor/Actor"


using namespace CommandMessage;

class MessageComponent {

public:

    MessageComponent(std::string &&);
    MessageComponent(std::unique_ptr<CommandSelector<Actor>, std::default_delete<CommandSelector<Actor>>> &&);
    MessageComponent(CommandMessage::MessageComponent&&);
};
