#pragma once

#include "../core/Path.h"
#include "../bedrock/actor/Player.h"
#include <string>


class PermissionsFile {

public:

    ~PermissionsFile();
    PermissionsFile(Core::Path const&);
    void reload();
//  void persistPlayerPermissionsToDisk(Player const&, PlayerPermissionLevel); //TODO: incomplete function definition
//  void persistPlayerPermissionsToDisk(std::string const&, PlayerPermissionLevel); //TODO: incomplete function definition
    void fileExists()const;
    void readPermissionFile();
//  void applyPlayerPermissionsFromDisk(Player &, CommandPermissionLevel); //TODO: incomplete function definition
//  void setDefaultPlayerPermission(Player &, CommandPermissionLevel); //TODO: incomplete function definition
//  bool isPermissionsSet(std::string const&, PlayerPermissionLevel)const; //TODO: incomplete function definition
    void clear();
//  std::string getXUIDsByPermission(PlayerPermissionLevel)const; //TODO: incomplete function definition
    std::string getPermissions()const;
};
