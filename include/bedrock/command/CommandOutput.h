#pragma once

#include <string>
#include "CommandOutputParameter.h"
#include "CommandOutputMessage.h"
#include "../actor/Actor.h"
#include <vector>
#include <memory>
#include "CommandPropertyBag.h"


class CommandOutput {

public:
//  CommandOutput(CommandOutputType); //TODO: incomplete function definition
//  void addMessage(std::string const&, std::vector<CommandOutputParameter> const&, CommandOutputMessageType); //TODO: incomplete function definition
    bool wantsData()const;
    void getType()const;
    void addToResultList(std::string const&, Actor const&);
    void getSuccessCount()const;
    void success(std::string const&, std::vector<CommandOutputParameter> const&);
    void getMessages()const;
    void error(std::string const&, std::vector<CommandOutputParameter> const&);
    void addToResultList(std::string const&, std::string const&);
    void getData()const;
    CommandOutput(CommandOutput const&);
    void success();
    std::string getMessageParams(std::vector<CommandOutputParameter> const&);
    void empty()const;
//  void load(CommandOutputType, int, std::vector<CommandOutputMessage> &&, std::unique_ptr<CommandPropertyBag> &&); //TODO: incomplete function definition
    ~CommandOutput();
    void forceOutput(std::string const&, std::vector<CommandOutputParameter> const&);
};
