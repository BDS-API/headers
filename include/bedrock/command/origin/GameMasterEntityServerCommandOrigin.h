#pragma once

#include "ActorServerCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    ~GameMasterEntityServerCommandOrigin(); // _ZN35GameMasterEntityServerCommandOriginD2Ev
    virtual void getPermissionsLevel()const; // _ZNK35GameMasterEntityServerCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK35GameMasterEntityServerCommandOrigin5cloneEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK35GameMasterEntityServerCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK35GameMasterEntityServerCommandOrigin13getOriginTypeEv
    GameMasterEntityServerCommandOrigin(Actor &); // _ZN35GameMasterEntityServerCommandOriginC2ER5Actor
    GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &); // _ZN35GameMasterEntityServerCommandOriginC2E13ActorUniqueIDR5Level
};
