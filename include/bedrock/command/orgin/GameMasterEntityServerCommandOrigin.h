#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../level/Level"
#include "../../actor/Actor"


class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    GameMasterEntityServerCommandOrigin::~GameMasterEntityServerCommandOrigin()
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;

    GameMasterEntityServerCommandOrigin(Actor &);
    GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &);
};
