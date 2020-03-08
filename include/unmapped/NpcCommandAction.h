#pragma once

#include "../json/Value"


class NpcCommandAction : NpcAction {

public:
    static long COMMAND_DELIMITER;
    static long COMMAND_LINE_KEY[abi:cxx11];
    static long COMMAND_VERSION_KEY[abi:cxx11];

    virtual NpcCommandAction::~NpcCommandAction()
    virtual void toJson();
    virtual void fromJson(Json::Value const&);

    NpcCommandAction(void);
    void getCommands();
    void setCommands(std::vector<NpcCommandAction::SavedCommand, std::allocator<NpcCommandAction::SavedCommand>> &&);
};
