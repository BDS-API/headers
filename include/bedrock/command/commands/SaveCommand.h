#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class SaveCommand : ServerCommand {

public:
    static long mSaveAllMutex;
    static long mSaveAllFileList;
    static long mState;

    ~SaveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void saveHold(CommandOutput &);
    void setup(CommandRegistry &);
    void saveState(CommandOutput &);
    void saveResume(CommandOutput &);
    SaveCommand();
};
