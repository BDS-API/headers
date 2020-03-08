#pragma once

#include "../CommandRegistry"
#include "../../actor/Actor"
#include "../Command"
#include "../CommandOutput"
#include "../orgin/CommandOrigin"


class TagCommand : Command {

public:
    virtual TagCommand::~TagCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TagCommand(void);
    void _getSelectorResults(CommandOrigin const&, CommandOutput &)const;
    void _addTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
    void _removeTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
    void _listTags(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
};
