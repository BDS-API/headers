#pragma once

class CommandOutputParameter {

public:

    void CommandOutputParameter(char const*);
    void CommandOutputParameter(std::string const&);
    void CommandOutputParameter(std::string const&, int);
    void CommandOutputParameter(Actor const&);
    void CommandOutputParameter(Actor const*);
    void CommandOutputParameter(bool);
    void CommandOutputParameter(int);
    void CommandOutputParameter(float);
    void CommandOutputParameter(BlockPos);
    void CommandOutputParameter(Vec3);
    void CommandOutputParameter(CommandOutputParameter::NoCountType);
    void CommandOutputParameter(std::vector<Actor const*, std::allocator<Actor const*>> const&);
    void CommandOutputParameter(std::vector<Player const*, std::allocator<Player const*>> const&);
    void CommandOutputParameter(std::vector<std::string, std::allocator<std::string>> const&);
    void CommandOutputParameter(CommandSelectorResults<Actor> const&);
    void CommandOutputParameter(CommandSelectorResults<Player> const&);
    void CommandOutputParameter(CommandOutputParameter&&);
    void CommandOutputParameter(CommandOutputParameter const&);
    void count(void)const;
};
