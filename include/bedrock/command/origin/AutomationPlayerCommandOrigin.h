#pragma once

#include <string>
#include "PlayerCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    ~AutomationPlayerCommandOrigin(); // _ZN29AutomationPlayerCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK29AutomationPlayerCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK29AutomationPlayerCommandOrigin7getNameB5cxx11Ev
    virtual void getPermissionsLevel()const; // _ZNK29AutomationPlayerCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK29AutomationPlayerCommandOrigin5cloneEv
    virtual bool hasChatPerms()const; // _ZNK29AutomationPlayerCommandOrigin12hasChatPermsEv
    virtual bool hasTellPerms()const; // _ZNK29AutomationPlayerCommandOrigin12hasTellPermsEv
    virtual void getSourceId()const; // _ZNK29AutomationPlayerCommandOrigin11getSourceIdEv
    virtual void getOriginType()const; // _ZNK29AutomationPlayerCommandOrigin13getOriginTypeEv
    virtual void toCommandOriginData()const; // _ZNK29AutomationPlayerCommandOrigin19toCommandOriginDataEv
    AutomationPlayerCommandOrigin(std::string const&, Player &); // _ZN29AutomationPlayerCommandOriginC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER6Player
//  AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::string const&, CommandPermissionLevel, NetworkIdentifier const&); //TODO: incomplete function definition // _ZN29AutomationPlayerCommandOriginC2E13ActorUniqueIDR5LevelRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE22CommandPermissionLevelRK17NetworkIdentifier
};
