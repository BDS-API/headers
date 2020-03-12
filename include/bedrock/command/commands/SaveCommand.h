#pragma once

#include "ServerCommand.h"


class SaveCommand : ServerCommand {

public:
    static long mSaveAllMutex;
    static long mSaveAllFileList;
    static long mState;

    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~SaveCommand();
    void saveState(CommandOutput &);
    void saveResume(CommandOutput &);
    void setup(CommandRegistry &);
    SaveCommand();
    void saveHold(CommandOutput &);
};
