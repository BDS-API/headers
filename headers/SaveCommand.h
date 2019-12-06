#pragma once

class SaveCommand : ServerCommand {

public:
    static long SaveCommand::mSaveAllMutex;
    static long SaveCommand::mSaveAllFileList;
    static long SaveCommand::mState;

    virtual ~SaveCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void saveHold(CommandOutput &);
    void saveResume(CommandOutput &);
    void saveState(CommandOutput &);
    void setup(CommandRegistry &);
    void SaveCommand(void);
};
