#pragma once

#include "../bedrock/command/Command"


using namespace NpcCommandAction;

class SavedCommand {

public:

    SavedCommand(std::string const&, std::unique_ptr<Command, std::default_delete<Command>>, int);
    SavedCommand(NpcCommandAction::SavedCommand const&);
    SavedCommand(NpcCommandAction::SavedCommand&&);
};
