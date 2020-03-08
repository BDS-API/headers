#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../actor/Actor"
#include "../../level/Level"


class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    virtual GameMasterEntityServerCommandOrigin::~GameMasterEntityServerCommandOrigin()
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;

    GameMasterEntityServerCommandOrigin(Actor &);
    GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &);
};
