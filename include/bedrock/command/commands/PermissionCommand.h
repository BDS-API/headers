#pragma once

#include "../CommandRegistry"
#include "../CommandOutput"
#include "../orgin/CommandOrigin"
#include "../../../unmapped/PermissionsFile"


class PermissionCommand : ServerCommand {

public:
    static long mPermissionsFile;

    virtual PermissionCommand::~PermissionCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, PermissionsFile *);
    PermissionCommand(void);
    void list(CommandOrigin const&, CommandOutput &)const;
    void reload(CommandOrigin const&, CommandOutput &)const;
    void set(CommandOrigin const&, CommandOutput &)const;
};
