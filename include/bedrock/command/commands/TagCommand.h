#pragma once

#include <string>
#include "../Command.h"
#include <vector>


class TagCommand : Command {

public:
    ~TagCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    TagCommand();
    void _addTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const;
    void _removeTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const;
    void _listTags(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const;
    std::string _getTagWithPercentageFixed()const;
    void _getSelectorResults(CommandOrigin const&, CommandOutput &)const;
};
