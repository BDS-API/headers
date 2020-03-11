#pragma once

#include "../CommandRegistry.h"
#include "./ServerCommand.h"
#include "../CommandOutput.h"
#include "../../../unmapped/PermissionsFile.h"
#include "../orgin/CommandOrigin.h"


class PermissionCommand : ServerCommand {

public:
    static long mPermissionsFile;

    virtual ~PermissionCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &, PermissionsFile *);
    PermissionCommand();
    void list(CommandOrigin const&, CommandOutput &)const;
    void reload(CommandOrigin const&, CommandOutput &)const;
    void set(CommandOrigin const&, CommandOutput &)const;
};
