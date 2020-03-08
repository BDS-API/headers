#pragma once



class CommandFlag {

public:

    CommandFlag(void);
    CommandFlag(CommandVisibilityFlag);
    CommandFlag(CommandCheatFlag);
    CommandFlag(CommandTypeFlag);
    CommandFlag(CommandUsageFlag);
    CommandFlag(CommandSyncFlag);
    CommandFlag(CommandExecuteFlag);
};
