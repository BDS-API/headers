#pragma once

class PermissionsHandler {

public:

    void PermissionsHandler(void);
    void PermissionsHandler(PermissionsHandler const&);
    void addSaveData(CompoundTag &)const;
    void loadSaveData(CompoundTag const&);
    void getCommandPermissions(void)const;
    void setCommandPermissions(CommandPermissionLevel);
    void getPlayerPermissions(void)const;
    void setPlayerPermissions(PlayerPermissionLevel);
    void playerPermissionLevelFromString(std::string const&);
};
