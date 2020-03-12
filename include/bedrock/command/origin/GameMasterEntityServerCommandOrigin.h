#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ActorServerCommandOrigin.h"
#include "../../actor/Actor.h"
#include "../../level/Level.h"


class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual void getOriginType()const;
    ~GameMasterEntityServerCommandOrigin();
    GameMasterEntityServerCommandOrigin(Actor &);
    GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &);
};
