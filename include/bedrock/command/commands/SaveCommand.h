#pragma once

#include "../CommandRegistry.h"
#include "./ServerCommand.h"
#include "../orgin/CommandOrigin.h"
#include "../CommandOutput.h"


class SaveCommand : ServerCommand {

public:
    static long mSaveAllMutex;
    static long mSaveAllFileList;
    static long mState;

    virtual ~SaveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void saveHold(CommandOutput &);
    void saveResume(CommandOutput &);
    void saveState(CommandOutput &);
    void setup(CommandRegistry &);
    SaveCommand();
};
