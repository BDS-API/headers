#pragma once

#include <string>


class PermissionsFile {

public:
//  std::string getXUIDsByPermission(PlayerPermissionLevel)const; //TODO: incomplete function definition
//  void applyPlayerPermissionsFromDisk(Player &, CommandPermissionLevel); //TODO: incomplete function definition
    void clear();
    void reload();
    ~PermissionsFile();
//  bool isPermissionsSet(std::string const&, PlayerPermissionLevel)const; //TODO: incomplete function definition
//  void setDefaultPlayerPermission(Player &, CommandPermissionLevel); //TODO: incomplete function definition
    PermissionsFile(Core::Path const&);
    std::string getPermissions()const;
    void fileExists()const;
//  void persistPlayerPermissionsToDisk(std::string const&, PlayerPermissionLevel); //TODO: incomplete function definition
//  void persistPlayerPermissionsToDisk(Player const&, PlayerPermissionLevel); //TODO: incomplete function definition
    void readPermissionFile();
};
