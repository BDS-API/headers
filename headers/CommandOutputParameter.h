#pragma once

class CommandOutputParameter {

public:

    void CommandOutputParameter(char const*);
    void CommandOutputParameter(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void CommandOutputParameter(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int);
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
    void CommandOutputParameter(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void CommandOutputParameter(CommandSelectorResults<Actor> const&);
    void CommandOutputParameter(CommandSelectorResults<Player> const&);
    void CommandOutputParameter(CommandOutputParameter&&);
    void CommandOutputParameter(CommandOutputParameter const&);
    void count(void)const;
};
