#pragma once

class PlayerCommandOrigin : CommandOrigin {

public:
    virtual ~PlayerCommandOrigin();
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual bool canUseAbility(AbilitiesIndex)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOriginType(void)const;

    void PlayerCommandOrigin(Player &);
    void PlayerCommandOrigin(ActorUniqueID, Level &);
};
