#pragma once

#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include <vector>
#include "../actor/Player.h"


class CommandOutputParameter {

public:
    CommandOutputParameter(int);
    CommandOutputParameter(std::string const&, int);
    CommandOutputParameter(bool);
    CommandOutputParameter(CommandOutputParameter &&);
    void count()const;
//  CommandOutputParameter(CommandSelectorResults<Player> const&); //TODO: incomplete function definition
    CommandOutputParameter(CommandOutputParameter const&);
    CommandOutputParameter(std::string const&);
    CommandOutputParameter(Actor const&);
    CommandOutputParameter(std::vector<Actor const*> const&);
    CommandOutputParameter(std::vector<Player const*> const&);
    ~CommandOutputParameter();
    CommandOutputParameter(float);
//  CommandOutputParameter(CommandOutputParameter::NoCountType); //TODO: incomplete function definition
    CommandOutputParameter(std::vector<std::string> const&);
//  CommandOutputParameter(CommandSelectorResults<Actor> const&); //TODO: incomplete function definition
    CommandOutputParameter(Vec3);
    std::string getText()const;
    CommandOutputParameter(Actor const*);
    CommandOutputParameter(BlockPos);
    CommandOutputParameter(char const*);
};
