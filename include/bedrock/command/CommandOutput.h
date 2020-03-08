#pragma once

#include "../actor/Actor"


class CommandOutput {

public:

    CommandOutput(CommandOutputType);
    CommandOutput(CommandOutput const&);
    void load(CommandOutputType, int, std::vector<CommandOutputMessage, std::allocator<CommandOutputMessage>> &&, std::unique_ptr<CommandPropertyBag, std::default_delete<std::unique_ptr>> &&);
    void error(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void addMessage(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&, CommandOutputMessageType);
    void forceOutput(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void success(std::string const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void success();
    void getSuccessCount()const;
    bool wantsData()const;
    void empty()const;
    void getData()const;
    void addToResultList(std::string const&, std::string const&);
    void addToResultList(std::string const&, Actor const&);
    void getType()const;
    void getMessages()const;
};
