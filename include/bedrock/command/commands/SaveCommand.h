#pragma once

#include "../orgin/CommandOrigin"
#include "../CommandOutput"
#include "../CommandRegistry"


class SaveCommand : ServerCommand {

public:
    static long mSaveAllMutex;
    static long mSaveAllFileList;
    static long mState;

    SaveCommand::~SaveCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void saveHold(CommandOutput &);
    void saveResume(CommandOutput &);
    void saveState(CommandOutput &);
    void setup(CommandRegistry &);
    SaveCommand(void);
};
