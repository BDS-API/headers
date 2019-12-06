#pragma once

class PermissionCommand : ServerCommand {

public:
    static long PermissionCommand::mPermissionsFile;

    virtual ~PermissionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, PermissionsFile *);
    void PermissionCommand(void);
    void list(CommandOrigin const&, CommandOutput &)const;
    void reload(CommandOrigin const&, CommandOutput &)const;
    void set(CommandOrigin const&, CommandOutput &)const;
};
