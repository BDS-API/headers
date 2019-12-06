#pragma once

class GameMasterEntityServerCommandOrigin : ActorServerCommandOrigin {

public:
    virtual ~GameMasterEntityServerCommandOrigin();
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;

    void GameMasterEntityServerCommandOrigin(Actor &);
    void GameMasterEntityServerCommandOrigin(ActorUniqueID, Level &);
};
