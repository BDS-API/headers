#pragma once

#include "../CommandRegistry.h"
#include "../CommandOutput.h"
#include "../../actor/Actor.h"
#include <memory>
#include <vector>
#include "../Command.h"
#include <functional>
#include "../orgin/CommandOrigin.h"
#include <string>


class TagCommand : Command {

public:
    virtual ~TagCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    TagCommand();
    void _getSelectorResults(CommandOrigin const&, CommandOutput &)const;
    void _addTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
    void _removeTag(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
    void _listTags(CommandOutput &, std::vector<std::reference_wrapper<Actor>, std::allocator<std::reference_wrapper<Actor>>> const&)const;
    std::string _getTagWithPercentageFixed()const;
};
