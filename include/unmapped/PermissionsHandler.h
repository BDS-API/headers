#pragma once

#include <string>


class PermissionsHandler {

public:
    PermissionsHandler(); // _ZN18PermissionsHandlerC2Ev
    PermissionsHandler(PermissionsHandler const&); // _ZN18PermissionsHandlerC2ERKS_
    void operator==(PermissionsHandler const&)const; // _ZNK18PermissionsHandlereqERKS_
    void operator!=(PermissionsHandler const&)const; // _ZNK18PermissionsHandlerneERKS_
    void addSaveData(CompoundTag &)const; // _ZNK18PermissionsHandler11addSaveDataER11CompoundTag
    void loadSaveData(CompoundTag const&); // _ZN18PermissionsHandler12loadSaveDataERK11CompoundTag
    void getCommandPermissions()const; // _ZNK18PermissionsHandler21getCommandPermissionsEv
//  void setCommandPermissions(CommandPermissionLevel); //TODO: incomplete function definition // _ZN18PermissionsHandler21setCommandPermissionsE22CommandPermissionLevel
    void getPlayerPermissions()const; // _ZNK18PermissionsHandler20getPlayerPermissionsEv
//  void setPlayerPermissions(PlayerPermissionLevel); //TODO: incomplete function definition // _ZN18PermissionsHandler20setPlayerPermissionsE21PlayerPermissionLevel
    void playerPermissionLevelFromString(std::string const&); // _ZN18PermissionsHandler31playerPermissionLevelFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string playerPermissionLevelToString(PlayerPermissionLevel const&); //TODO: incomplete function definition // _ZN18PermissionsHandler29playerPermissionLevelToStringB5cxx11ERK21PlayerPermissionLevel
};
