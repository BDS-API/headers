#pragma once

#include <string>
#include "CommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class ActorCommandOrigin : CommandOrigin {

public:
    ~ActorCommandOrigin(); // _ZN18ActorCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK18ActorCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK18ActorCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK18ActorCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK18ActorCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK18ActorCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK18ActorCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK18ActorCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK18ActorCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK18ActorCommandOrigin5cloneEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK18ActorCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK18ActorCommandOrigin13getOriginTypeEv
    ActorCommandOrigin(Actor &); // _ZN18ActorCommandOriginC2ER5Actor
    ActorCommandOrigin(ActorUniqueID, Level &); // _ZN18ActorCommandOriginC2E13ActorUniqueIDR5Level
};
