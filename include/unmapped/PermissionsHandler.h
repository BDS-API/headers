#pragma once

#include "./PermissionsHandler.h"
#include "../bedrock/nbt/CompoundTag.h"
#include <string>


class PermissionsHandler {

public:

    PermissionsHandler();
    PermissionsHandler(PermissionsHandler const&);
    void operator==(PermissionsHandler const&)const;
    void operator!=(PermissionsHandler const&)const;
    void addSaveData(CompoundTag &)const;
    void loadSaveData(CompoundTag const&);
    void getCommandPermissions()const;
//  void setCommandPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    void getPlayerPermissions()const;
//  void setPlayerPermissions(PlayerPermissionLevel); //TODO: incomplete function definition
    void playerPermissionLevelFromString(std::string const&);
//  std::string playerPermissionLevelToString(PlayerPermissionLevel const&); //TODO: incomplete function definition
};
