#pragma once

#include <string>
#include "CommandOrigin.h"


class ServerCommandOrigin : CommandOrigin {

public:
    ~ServerCommandOrigin(); // _ZN19ServerCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK19ServerCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK19ServerCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK19ServerCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK19ServerCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK19ServerCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK19ServerCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK19ServerCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK19ServerCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK19ServerCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK19ServerCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK19ServerCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK19ServerCommandOrigin13getOriginTypeEv
//  ServerCommandOrigin(std::string const&, ServerLevel &, CommandPermissionLevel); //TODO: incomplete function definition // _ZN19ServerCommandOriginC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEER11ServerLevel22CommandPermissionLevel
};
