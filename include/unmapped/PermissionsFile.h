#pragma once

#include <string>


class PermissionsFile {

public:
    ~PermissionsFile(); // _ZN15PermissionsFileD2Ev
    PermissionsFile(Core::Path const&); // _ZN15PermissionsFileC2ERKN4Core4PathE
    void reload(); // _ZN15PermissionsFile6reloadEv
//  void persistPlayerPermissionsToDisk(Player const&, PlayerPermissionLevel); //TODO: incomplete function definition // _ZN15PermissionsFile30persistPlayerPermissionsToDiskERK6Player21PlayerPermissionLevel
//  void persistPlayerPermissionsToDisk(std::string const&, PlayerPermissionLevel); //TODO: incomplete function definition // _ZN15PermissionsFile30persistPlayerPermissionsToDiskERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE21PlayerPermissionLevel
    void fileExists()const; // _ZNK15PermissionsFile10fileExistsEv
    void readPermissionFile(); // _ZN15PermissionsFile18readPermissionFileEv
//  void applyPlayerPermissionsFromDisk(Player &, CommandPermissionLevel); //TODO: incomplete function definition // _ZN15PermissionsFile30applyPlayerPermissionsFromDiskER6Player22CommandPermissionLevel
//  void setDefaultPlayerPermission(Player &, CommandPermissionLevel); //TODO: incomplete function definition // _ZN15PermissionsFile26setDefaultPlayerPermissionER6Player22CommandPermissionLevel
//  bool isPermissionsSet(std::string const&, PlayerPermissionLevel)const; //TODO: incomplete function definition // _ZNK15PermissionsFile16isPermissionsSetERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE21PlayerPermissionLevel
    void clear(); // _ZN15PermissionsFile5clearEv
//  std::string getXUIDsByPermission(PlayerPermissionLevel)const; //TODO: incomplete function definition // _ZNK15PermissionsFile20getXUIDsByPermissionB5cxx11E21PlayerPermissionLevel
    std::string getPermissions()const; // _ZNK15PermissionsFile14getPermissionsB5cxx11Ev
};
