#pragma once

#include <string>
#include "../util/BlockPos.h"
#include <vector>
#include "../util/Vec3.h"


class CommandOutputParameter {

public:
    CommandOutputParameter(Vec3);
//  CommandOutputParameter(CommandOutputParameter::NoCountType); //TODO: incomplete function definition
    CommandOutputParameter(bool);
    CommandOutputParameter(float);
    std::string getText()const;
    CommandOutputParameter(std::string const&);
    CommandOutputParameter(Actor const*);
//  CommandOutputParameter(CommandSelectorResults<Actor> const&); //TODO: incomplete function definition
    CommandOutputParameter(Actor const&);
    ~CommandOutputParameter();
    CommandOutputParameter(CommandOutputParameter &&);
//  CommandOutputParameter(CommandSelectorResults<Player> const&); //TODO: incomplete function definition
    CommandOutputParameter(CommandOutputParameter const&);
    CommandOutputParameter(char const*);
    CommandOutputParameter(std::vector<Actor const*> const&);
    CommandOutputParameter(std::vector<std::string> const&);
    CommandOutputParameter(BlockPos);
    CommandOutputParameter(int);
    void count()const;
    CommandOutputParameter(std::vector<Player const*> const&);
    CommandOutputParameter(std::string const&, int);
};
