#pragma once

#include <memory>
#include "./CommandOutputParameter.h"
#include "./CommandOutputMessage.h"
#include <vector>
#include "../actor/Actor.h"
#include "./CommandOutput.h"
#include "./CommandPropertyBag.h"
#include <string>


class CommandOutput {

public:

    ~CommandOutput();
//  CommandOutput(CommandOutputType); //TODO: incomplete function definition
    CommandOutput(CommandOutput const&);
//  void load(CommandOutputType, int, std::vector<CommandOutputMessage, std::allocator<CommandOutputMessage>> &&, std::unique_ptr<CommandPropertyBag, std::default_delete<std::unique_ptr>> &&); //TODO: incomplete function definition
    void error(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
//  void addMessage(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&, CommandOutputMessageType); //TODO: incomplete function definition
    void forceOutput(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void success(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void success();
    std::string getMessageParams(std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void getSuccessCount()const;
    bool wantsData()const;
    void empty()const;
    void getData()const;
    void addToResultList(std::string const&, std::string const&);
    void addToResultList(std::string const&, Actor const&);
    void getType()const;
    void getMessages()const;
};
