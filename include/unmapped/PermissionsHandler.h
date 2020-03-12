#pragma once

#include <string>
#include "../bedrock/nbt/CompoundTag.h"


class PermissionsHandler {

public:
    void addSaveData(CompoundTag &)const;
//  std::string playerPermissionLevelToString(PlayerPermissionLevel const&); //TODO: incomplete function definition
    PermissionsHandler();
    void operator!=(PermissionsHandler const&)const;
    void playerPermissionLevelFromString(std::string const&);
//  void setPlayerPermissions(PlayerPermissionLevel); //TODO: incomplete function definition
//  void setCommandPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    void getCommandPermissions()const;
    void loadSaveData(CompoundTag const&);
    PermissionsHandler(PermissionsHandler const&);
    void getPlayerPermissions()const;
    void operator==(PermissionsHandler const&)const;
};
