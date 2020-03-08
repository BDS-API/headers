#pragma once

#include "../orgin/CommandOrigin"
#include "../../actor/Actor"
#include "../CommandOutput"
#include "../Command"
#include "../CommandRegistry"


class TagCommand : Command {

public:
    TagCommand::~TagCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TagCommand(void);
    void _getSelectorResults(CommandOrigin const&, CommandOutput &)const;
    void _addTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
    void _removeTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
    void _listTags(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
};
