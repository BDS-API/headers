#pragma once

class CommandMessage::MessageComponent {

public:

    void MessageComponent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &&);
    void MessageComponent(std::unique_ptr<CommandSelector<Actor>, std::default_delete<CommandSelector<Actor>>> &&);
    void MessageComponent(CommandMessage::MessageComponent&&);
};
