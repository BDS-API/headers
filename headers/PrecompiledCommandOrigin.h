#pragma once

class PrecompiledCommandOrigin : CommandOrigin {

    virtual void Precompiled~PrecompiledCommandOrigin();
    virtual void Precompiled~PrecompiledCommandOrigin();
    virtual void _ZNK24PrecompiledCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK24PrecompiledCommandOrigin7getNameB5cxx11Ev;
    virtual void PrecompiledgetBlockPosition(void)const;
    virtual void PrecompiledgetWorldPosition(void)const;
    virtual void PrecompiledgetLevel(void)const;
    virtual void PrecompiledgetDimension(void)const;
    virtual void PrecompiledgetEntity(void)const;
    virtual void PrecompiledgetPermissionsLevel(void)const;
    virtual void Precompiledclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void PrecompiledhasChatPerms(void)const;
    virtual void PrecompiledhasTellPerms(void)const;
    virtual void PrecompiledcanUseAbility(AbilitiesIndex)const;
    virtual void PrecompiledisWorldBuilder(void)const;
    virtual void PrecompiledcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void PrecompiledisSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void PrecompiledgetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
