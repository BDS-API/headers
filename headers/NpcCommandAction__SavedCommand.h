#pragma once

class NpcCommandAction::SavedCommand {

public:

    void SavedCommand(std::string const&, std::unique_ptr<Command, std::default_delete<Command>>, int);
    void SavedCommand(NpcCommandAction::SavedCommand const&);
    void SavedCommand(NpcCommandAction::SavedCommand&&);
};
