#pragma once

#include "../bedrock/nbt/CompoundTag"


class PermissionsHandler {

public:

    PermissionsHandler(void);
    PermissionsHandler(PermissionsHandler const&);
    void addSaveData(CompoundTag &)const;
    void loadSaveData(CompoundTag const&);
    void getCommandPermissions()const;
    void setCommandPermissions(CommandPermissionLevel);
    void getPlayerPermissions()const;
    void setPlayerPermissions(PlayerPermissionLevel);
    void playerPermissionLevelFromString(std::string const&);
};
