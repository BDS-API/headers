#pragma once

#include <memory>
#include <string>
#include <vector>
#include "NpcAction.h"


class NpcCommandAction : NpcAction {

public:
    class SavedCommand;

    static long COMMAND_DELIMITER;
    static std::string COMMAND_LINE_KEY;
    static std::string COMMAND_VERSION_KEY;

    virtual void fromJson(Json::Value const&);
    ~NpcCommandAction();
    virtual void toJson();
    NpcCommandAction();
    void setCommands(std::vector<NpcCommandAction::SavedCommand> &&);
    void getCommands();
    class SavedCommand {

    public:
        SavedCommand(NpcCommandAction::SavedCommand &&);
        SavedCommand(std::string const&, std::unique_ptr<Command>, int);
        ~SavedCommand();
        SavedCommand(NpcCommandAction::SavedCommand const&);
    };
};
