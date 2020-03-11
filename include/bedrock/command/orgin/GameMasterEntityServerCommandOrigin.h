#pragma once

#include "./ActorServerCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../level/Level.h"
#include "../../actor/Actor.h"


class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    virtual ~GameMasterEntityServerCommandOrigin();
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;

    GameMasterEntityServerCommandOrigin(Actor &);
    GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &);
};
