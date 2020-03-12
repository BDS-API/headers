#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "CommandOrigin.h"


class PlayerCommandOrigin : CommandOrigin {

public:
    virtual void getWorldPosition()const;
    virtual void getBlockPosition()const;
    ~PlayerCommandOrigin();
    virtual void getEntity()const;
    virtual void getSourceSubId()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual void getCursorHitPos()const;
    virtual void getDimension()const;
    virtual void getSourceId()const;
    virtual void clone()const;
    virtual void getLevel()const;
    virtual void getCursorHitBlockPos()const;
    virtual void getOriginType()const;
    virtual void getPermissionsLevel()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual std::string getName()const;
    virtual std::string getRequestId()const;
    PlayerCommandOrigin(ActorUniqueID, Level &);
    PlayerCommandOrigin(Player &);
};
