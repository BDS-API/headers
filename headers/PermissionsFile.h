#pragma once

class PermissionsFile {

public:

    void PermissionsFile(Core::Path const&);
    void reload(void);
    void persistPlayerPermissionsToDisk(Player const&, PlayerPermissionLevel);
    void persistPlayerPermissionsToDisk(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PlayerPermissionLevel);
    void fileExists(void)const;
    void readPermissionFile(void);
    void applyPlayerPermissionsFromDisk(Player &, CommandPermissionLevel);
    void setDefaultPlayerPermission(Player &, CommandPermissionLevel);
    bool isPermissionsSet(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PlayerPermissionLevel)const;
    void clear(void);
};
