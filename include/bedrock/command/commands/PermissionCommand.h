#pragma once

#include "ServerCommand.h"


class PermissionCommand : public ServerCommand {

public:
    static long mPermissionsFile;

    virtual ~PermissionCommand(); // _ZN17PermissionCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK17PermissionCommand7executeERK13CommandOriginR13CommandOutput
    void setup(CommandRegistry &, PermissionsFile *); // _ZN17PermissionCommand5setupER15CommandRegistryP15PermissionsFile
    PermissionCommand(); // _ZN17PermissionCommandC2Ev
    void list(CommandOrigin const&, CommandOutput &)const; // _ZNK17PermissionCommand4listERK13CommandOriginR13CommandOutput
    void reload(CommandOrigin const&, CommandOutput &)const; // _ZNK17PermissionCommand6reloadERK13CommandOriginR13CommandOutput
    void set(CommandOrigin const&, CommandOutput &)const; // _ZNK17PermissionCommand3setERK13CommandOriginR13CommandOutput
};
