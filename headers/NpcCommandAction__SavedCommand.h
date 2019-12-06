#pragma once

class NpcCommandAction::SavedCommand {

public:

    void SavedCommand(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::unique_ptr<Command, std::default_delete<Command>>, int);
    void SavedCommand(NpcCommandAction::SavedCommand const&);
    void SavedCommand(NpcCommandAction::SavedCommand&&);
};
