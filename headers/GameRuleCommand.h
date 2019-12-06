#pragma once

class GameRuleCommand : Command {

public:
    virtual ~GameRuleCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, GameRuleCommand::InitProxy &&);
    void GameRuleCommand(void);
    void createJsonIndex(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, GameRule const&, Json::Value &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>*);
    void setGameRule(CommandOrigin const&, CommandOutput &)const;
    void getGameRule(CommandOrigin const&, CommandOutput &)const;
};
