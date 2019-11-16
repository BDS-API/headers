#pragma once

class ScriptCommandOrigin : CommandOrigin {

    virtual void Script~ScriptCommandOrigin();
    virtual void Script~ScriptCommandOrigin();
    virtual void _ZNK19ScriptCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK19ScriptCommandOrigin7getNameB5cxx11Ev;
    virtual void ScriptgetBlockPosition(void)const;
    virtual void ScriptgetWorldPosition(void)const;
    virtual void ScriptgetLevel(void)const;
    virtual void ScriptgetDimension(void)const;
    virtual void ScriptgetEntity(void)const;
    virtual void ScriptgetPermissionsLevel(void)const;
    virtual void Scriptclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void ScriptcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void ScriptisSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void ScriptgetOriginType(void)const;
    virtual void toCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void ScripthandleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
