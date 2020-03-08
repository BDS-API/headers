#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "../actor/Player"
#include "../util/Vec3"


class CommandOutputParameter {

public:

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
    CommandOutputParameter(CommandOutputParameter::NoCountType);
    CommandOutputParameter(std::vector<Actor const*, std::allocator<Actor const*>> const&);
    CommandOutputParameter(std::vector<Player const*, std::allocator<Player const*>> const&);
    CommandOutputParameter(std::vector<std::string, std::allocator<std::string>> const&);
    CommandOutputParameter(CommandSelectorResults<Actor> const&);
    CommandOutputParameter(CommandSelectorResults<Player> const&);
    CommandOutputParameter(CommandOutputParameter&&);
    CommandOutputParameter(CommandOutputParameter const&);
    void count()const;
};
