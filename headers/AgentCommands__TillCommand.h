#pragma once

class AgentCommands::TillCommand : AgentCommands::Command {

public:
    virtual ~TillCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void TillCommand(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, AgentCommands::Direction);
};
