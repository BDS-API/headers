#pragma once

class NpcCommandAction : NpcAction {

public:
    static long NpcCommandAction::COMMAND_DELIMITER;
    static long NpcCommandAction::COMMAND_LINE_KEY[abi:cxx11];
    static long NpcCommandAction::COMMAND_VERSION_KEY[abi:cxx11];

    virtual ~NpcCommandAction();
    virtual void toJson(void);
    virtual void fromJson(Json::Value const&);

    void NpcCommandAction(void);
    void getCommands(void);
    void setCommands(std::vector<NpcCommandAction::SavedCommand, std::allocator<NpcCommandAction::SavedCommand>> &&);
};
