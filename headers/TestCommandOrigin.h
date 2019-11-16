#pragma once

class TestCommandOrigin : CommandOrigin {

    virtual void Test~TestCommandOrigin();
    virtual void Test~TestCommandOrigin();
    virtual void _ZNK17TestCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK17TestCommandOrigin7getNameB5cxx11Ev;
    virtual void TestgetBlockPosition(void)const;
    virtual void TestgetWorldPosition(void)const;
    virtual void TestgetLevel(void)const;
    virtual void TestgetDimension(void)const;
    virtual void TestgetEntity(void)const;
    virtual void TestgetPermissionsLevel(void)const;
    virtual void Testclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void hasChatPerms(void)const;
    virtual void hasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void isWorldBuilder(void)const;
    virtual void TestcanUseCommandsWithoutCheatsEnabled(void)const;
    virtual void TestisSelectorExpansionAllowed(void)const;
    virtual void TestgetSourceId(void)const;
    virtual void TestgetSourceSubId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void TestgetOriginType(void)const;
    virtual void TesttoCommandOriginData(void)const;
    virtual void getUUID(void)const;
    virtual void handleCommandOutputCallback(Json::Value &&)const;
    virtual void _setUUID(mce::UUID const&);
}
