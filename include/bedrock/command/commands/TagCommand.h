#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "../../actor/Actor.h"
#include <functional>
#include <vector>
#include "../Command.h"
#include "../CommandOutput.h"


class TagCommand : Command {

public:
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~TagCommand();
    void _removeTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const;
    void setup(CommandRegistry &);
    TagCommand();
    void _listTags(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const;
    std::string _getTagWithPercentageFixed()const;
    void _getSelectorResults(CommandOrigin const&, CommandOutput &)const;
    void _addTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>> const&)const;
};
