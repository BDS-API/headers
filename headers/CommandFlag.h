#pragma once

class CommandFlag {

public:

    void CommandFlag(void);
    void CommandFlag(CommandVisibilityFlag);
    void CommandFlag(CommandCheatFlag);
    void CommandFlag(CommandTypeFlag);
    void CommandFlag(CommandUsageFlag);
    void CommandFlag(CommandSyncFlag);
    void CommandFlag(CommandExecuteFlag);
};
