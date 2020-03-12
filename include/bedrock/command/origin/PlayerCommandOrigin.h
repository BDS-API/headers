#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "CommandOrigin.h"


class PlayerCommandOrigin : CommandOrigin {

public:
    virtual void getBlockPosition()const;
    virtual void getSourceSubId()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual void clone()const;
    virtual void getLevel()const;
    virtual void getEntity()const;
    virtual void getCursorHitPos()const;
    ~PlayerCommandOrigin();
    virtual void getPermissionsLevel()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual void getWorldPosition()const;
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
    virtual void getDimension()const;
    virtual void getCursorHitBlockPos()const;
    virtual void getSourceId()const;
    PlayerCommandOrigin(Player &);
    PlayerCommandOrigin(ActorUniqueID, Level &);
};
