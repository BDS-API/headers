#pragma once

#include <string>


class PermissionsHandler {

public:
//  void setPlayerPermissions(PlayerPermissionLevel); //TODO: incomplete function definition
    void addSaveData(CompoundTag &)const;
    PermissionsHandler();
    void loadSaveData(CompoundTag const&);
    void getCommandPermissions()const;
    void getPlayerPermissions()const;
//  std::string playerPermissionLevelToString(PlayerPermissionLevel const&); //TODO: incomplete function definition
    PermissionsHandler(PermissionsHandler const&);
//  void setCommandPermissions(CommandPermissionLevel); //TODO: incomplete function definition
    void playerPermissionLevelFromString(std::string const&);
    void operator==(PermissionsHandler const&)const;
    void operator!=(PermissionsHandler const&)const;
};
