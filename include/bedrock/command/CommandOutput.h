#pragma once

#include <memory>
#include <string>
#include <vector>


class CommandOutput {

public:
    void getType()const;
    std::string getMessageParams(std::vector<CommandOutputParameter> const&);
    void getMessages()const;
    void addToResultList(std::string const&, Actor const&);
//  CommandOutput(CommandOutputType); //TODO: incomplete function definition
    void addToResultList(std::string const&, std::string const&);
    ~CommandOutput();
    CommandOutput(CommandOutput const&);
//  void load(CommandOutputType, int, std::vector<CommandOutputMessage> &&, std::unique_ptr<CommandPropertyBag> &&); //TODO: incomplete function definition
    void success(std::string const&, std::vector<CommandOutputParameter> const&);
    void error(std::string const&, std::vector<CommandOutputParameter> const&);
    void forceOutput(std::string const&, std::vector<CommandOutputParameter> const&);
    void success();
    void empty()const;
    void getData()const;
//  void addMessage(std::string const&, std::vector<CommandOutputParameter> const&, CommandOutputMessageType); //TODO: incomplete function definition
    bool wantsData()const;
    void getSuccessCount()const;
};
