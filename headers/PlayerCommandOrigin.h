#pragma once

class PlayerCommandOrigin : CommandOrigin {

    virtual void Player~PlayerCommandOrigin();
    virtual void Player~PlayerCommandOrigin();
    virtual void _ZNK19PlayerCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK19PlayerCommandOrigin7getNameB5cxx11Ev;
    virtual void PlayergetBlockPosition(void)const;
    virtual void PlayergetWorldPosition(void)const;
    virtual void PlayergetLevel(void)const;
    virtual void PlayergetDimension(void)const;
    virtual void PlayergetEntity(void)const;
    virtual void PlayergetPermissionsLevel(void)const;
    virtual void Playerclone(void)const;
    virtual void PlayergetCursorHitBlockPos(void)const;
    virtual void PlayergetCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void PlayercanUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void canUseCommandsWithoutCheatsEnabled(void)const;
    virtual void PlayerisSelectorExpansionAllowed(void)const;
    virtual void PlayergetSourceId(void)const;
    virtual void PlayergetSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void PlayergetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
