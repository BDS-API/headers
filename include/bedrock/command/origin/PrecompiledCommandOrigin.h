#pragma once

#include <string>
#include "CommandOrigin.h"


class PrecompiledCommandOrigin : CommandOrigin {

public:
    ~PrecompiledCommandOrigin(); // _ZN24PrecompiledCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK24PrecompiledCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK24PrecompiledCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK24PrecompiledCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK24PrecompiledCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK24PrecompiledCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK24PrecompiledCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK24PrecompiledCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK24PrecompiledCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK24PrecompiledCommandOrigin5cloneEv
    virtual bool hasChatPerms()const; // _ZNK24PrecompiledCommandOrigin12hasChatPermsEv
    virtual bool hasTellPerms()const; // _ZNK24PrecompiledCommandOrigin12hasTellPermsEv
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition // _ZNK24PrecompiledCommandOrigin13canUseAbilityE14AbilitiesIndex
    virtual bool isWorldBuilder()const; // _ZNK24PrecompiledCommandOrigin14isWorldBuilderEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK24PrecompiledCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK24PrecompiledCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK24PrecompiledCommandOrigin13getOriginTypeEv
    PrecompiledCommandOrigin(); // _ZN24PrecompiledCommandOriginC2Ev
};
