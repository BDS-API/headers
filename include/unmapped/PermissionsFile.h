#pragma once

#include "../bedrock/actor/Player"
#include "../core/Path"


class PermissionsFile {

public:

    PermissionsFile(Core::Path const&);
    void reload();
    void persistPlayerPermissionsToDisk(Player const&, PlayerPermissionLevel);
    void persistPlayerPermissionsToDisk(std::string const&, PlayerPermissionLevel);
    void fileExists()const;
    void readPermissionFile();
    void applyPlayerPermissionsFromDisk(Player &, CommandPermissionLevel);
    void setDefaultPlayerPermission(Player &, CommandPermissionLevel);
    bool isPermissionsSet(std::string const&, PlayerPermissionLevel)const;
    void clear();
};
