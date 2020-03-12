#pragma once

#include "../bedrock/actor/Player.h"
#include "../core/Path.h"
#include <string>


class PermissionsFile {

public:
    std::string getPermissions()const;
    void reload();
    ~PermissionsFile();
//  bool isPermissionsSet(std::string const&, PlayerPermissionLevel)const; //TODO: incomplete function definition
//  void persistPlayerPermissionsToDisk(Player const&, PlayerPermissionLevel); //TODO: incomplete function definition
//  void setDefaultPlayerPermission(Player &, CommandPermissionLevel); //TODO: incomplete function definition
//  void persistPlayerPermissionsToDisk(std::string const&, PlayerPermissionLevel); //TODO: incomplete function definition
    PermissionsFile(Core::Path const&);
//  std::string getXUIDsByPermission(PlayerPermissionLevel)const; //TODO: incomplete function definition
    void clear();
    void fileExists()const;
//  void applyPlayerPermissionsFromDisk(Player &, CommandPermissionLevel); //TODO: incomplete function definition
    void readPermissionFile();
};
