#pragma once

class WhitelistCommand : Command {

public:
    static long WhitelistCommand::mWhitelistFile;

    virtual ~WhitelistCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, WhitelistFile &);
    void WhitelistCommand(void);
};
