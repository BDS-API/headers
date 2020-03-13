#pragma once

#include "ServerCommand.h"


class SaveCommand : ServerCommand {

public:
    static long mSaveAllMutex;
    static long mSaveAllFileList;
    static long mState;

    ~SaveCommand(); // _ZN11SaveCommandD2Ev
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK11SaveCommand7executeERK13CommandOriginR13CommandOutput
    void saveHold(CommandOutput &); // _ZN11SaveCommand8saveHoldER13CommandOutput
    void saveResume(CommandOutput &); // _ZN11SaveCommand10saveResumeER13CommandOutput
    void saveState(CommandOutput &); // _ZN11SaveCommand9saveStateER13CommandOutput
    void setup(CommandRegistry &); // _ZN11SaveCommand5setupER15CommandRegistry
    SaveCommand(); // _ZN11SaveCommandC2Ev
};
