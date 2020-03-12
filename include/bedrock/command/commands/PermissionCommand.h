#pragma once

#include "ServerCommand.h"


class PermissionCommand : ServerCommand {

public:
    static long mPermissionsFile;

    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    ~PermissionCommand();
    void list(CommandOrigin const&, CommandOutput &)const;
    void set(CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &, PermissionsFile *);
    void reload(CommandOrigin const&, CommandOutput &)const;
    PermissionCommand();
};
