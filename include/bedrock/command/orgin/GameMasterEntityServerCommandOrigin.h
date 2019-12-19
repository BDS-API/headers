#pragma once

class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    virtual GameMasterEntityServerCommandOrigin::~GameMasterEntityServerCommandOrigin();
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;

    GameMasterEntityServerCommandOrigin(Actor &);
    GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &);
};
