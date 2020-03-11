#pragma once

#include <memory>
#include "./CommandOutputParameter.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include <vector>
#include "../actor/Player.h"
#include <string>


class CommandOutputParameter {

public:

    ~CommandOutputParameter();
    CommandOutputParameter(char const*);
    CommandOutputParameter(std::string const&);
    CommandOutputParameter(std::string const&, int);
    CommandOutputParameter(Actor const&);
    CommandOutputParameter(Actor const*);
    CommandOutputParameter(bool);
    CommandOutputParameter(int);
    CommandOutputParameter(float);
    CommandOutputParameter(BlockPos);
    CommandOutputParameter(Vec3);
//  CommandOutputParameter(CommandOutputParameter::NoCountType); //TODO: incomplete function definition
    CommandOutputParameter(std::vector<Actor const*, std::allocator<Actor const*>> const&);
    CommandOutputParameter(std::vector<Player const*, std::allocator<Player const*>> const&);
    CommandOutputParameter(std::vector<std::string, std::allocator<std::string>> const&);
//  CommandOutputParameter(CommandSelectorResults<Actor> const&); //TODO: incomplete function definition
//  CommandOutputParameter(CommandSelectorResults<Player> const&); //TODO: incomplete function definition
    CommandOutputParameter(CommandOutputParameter &&);
    CommandOutputParameter(CommandOutputParameter const&);
    std::string getText()const;
    void count()const;
};
