#pragma once

#include "../../../unmapped/PermissionsFile.h"
#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include "ServerCommand.h"
#include "../CommandOutput.h"


class PermissionCommand : ServerCommand {

public:
    static long mPermissionsFile;

    ~PermissionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void list(CommandOrigin const&, CommandOutput &)const;
    void reload(CommandOrigin const&, CommandOutput &)const;
    PermissionCommand();
    void setup(CommandRegistry &, PermissionsFile *);
    void set(CommandOrigin const&, CommandOutput &)const;
};
