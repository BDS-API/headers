#pragma once

#include <string>
#include "NpcAction.h"
#include <memory>
#include <vector>


class NpcCommandAction : NpcAction {

public:
    class SavedCommand;

    static long COMMAND_DELIMITER;
    static std::string COMMAND_LINE_KEY;
    static std::string COMMAND_VERSION_KEY;

    ~NpcCommandAction(); // _ZN16NpcCommandActionD2Ev
    virtual void toJson(); // _ZN16NpcCommandAction6toJsonEv
    virtual void fromJson(Json::Value const&); // _ZN16NpcCommandAction8fromJsonERKN4Json5ValueE
    NpcCommandAction(); // _ZN16NpcCommandActionC2Ev
    void getCommands(); // _ZN16NpcCommandAction11getCommandsEv
    void setCommands(std::vector<NpcCommandAction::SavedCommand> &&); // _ZN16NpcCommandAction11setCommandsEOSt6vectorINS_12SavedCommandESaIS1_EE
    class SavedCommand {

    public:
        SavedCommand(std::string const&, std::unique_ptr<Command>, int); // _ZN16NpcCommandAction12SavedCommandC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI7CommandSt14default_deleteISA_EEi
        SavedCommand(NpcCommandAction::SavedCommand const&); // _ZN16NpcCommandAction12SavedCommandC2ERKS0_
        SavedCommand(NpcCommandAction::SavedCommand &&); // _ZN16NpcCommandAction12SavedCommandC2EOS0_
        ~SavedCommand(); // _ZN16NpcCommandAction12SavedCommandD2Ev
    };
};
