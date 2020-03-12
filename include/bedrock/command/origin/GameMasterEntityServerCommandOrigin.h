#pragma once

#include "ActorServerCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    ~GameMasterEntityServerCommandOrigin();
    virtual void getPermissionsLevel()const;
    virtual void getOriginType()const;
    virtual void clone()const;
    virtual bool isSelectorExpansionAllowed()const;
    GameMasterEntityServerCommandOrigin(Actor &);
    GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &);
};
