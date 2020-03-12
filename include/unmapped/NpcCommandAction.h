#pragma once

#include <string>
#include "../bedrock/command/Command.h"
#include "../json/Value.h"
#include <vector>
#include <memory>
#include "NpcAction.h"


class NpcCommandAction : NpcAction {

public:
    class SavedCommand;

    static long COMMAND_DELIMITER;
    static std::string COMMAND_LINE_KEY;
    static std::string COMMAND_VERSION_KEY;

    virtual void fromJson(Json::Value const&);
    virtual void toJson();
    ~NpcCommandAction();
    void setCommands(std::vector<NpcCommandAction::SavedCommand> &&);
    NpcCommandAction();
    void getCommands();
    class SavedCommand {

    public:
        SavedCommand(NpcCommandAction::SavedCommand const&);
        SavedCommand(std::string const&, std::unique_ptr<Command>, int);
        ~SavedCommand();
        SavedCommand(NpcCommandAction::SavedCommand &&);
    };
};
