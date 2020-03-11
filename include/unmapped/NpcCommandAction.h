#pragma once

#include "../json/Value.h"
#include <memory>
#include "./SavedCommand.h"
#include <vector>
#include "./NpcAction.h"


class NpcCommandAction : NpcAction {

public:
    static long COMMAND_DELIMITER;
    static std::string COMMAND_LINE_KEY;
    static std::string COMMAND_VERSION_KEY;

    virtual ~NpcCommandAction();
    virtual void toJson();
    virtual void fromJson(Json::Value const&);

    NpcCommandAction();
    void getCommands();
    void setCommands(std::vector<NpcCommandAction::SavedCommand, std::allocator<NpcCommandAction::SavedCommand>> &&);
};
