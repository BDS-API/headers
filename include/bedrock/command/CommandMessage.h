#pragma once

#include <string>
#include <memory>


class CommandMessage {

public:
    class MessageComponent;

    CommandMessage(); // _ZN14CommandMessageC2Ev
    ~CommandMessage(); // _ZN14CommandMessageD2Ev
    std::string getMessage(CommandOrigin const&)const; // _ZNK14CommandMessage10getMessageB5cxx11ERK13CommandOrigin
    class MessageComponent {

    public:
        MessageComponent(std::string &&); // _ZN14CommandMessage16MessageComponentC2EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        MessageComponent(std::unique_ptr<CommandSelector<Actor>> &&); // _ZN14CommandMessage16MessageComponentC2EOSt10unique_ptrI15CommandSelectorI5ActorESt14default_deleteIS4_EE
        MessageComponent(CommandMessage::MessageComponent &&); // _ZN14CommandMessage16MessageComponentC2EOS0_
        ~MessageComponent(); // _ZN14CommandMessage16MessageComponentD2Ev
    };
};
