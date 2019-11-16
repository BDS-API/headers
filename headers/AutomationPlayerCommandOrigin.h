#pragma once

class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

    virtual void Automation~AutomationPlayerCommandOrigin();
    virtual void Automation~AutomationPlayerCommandOrigin();
    virtual void _ZNK29AutomationPlayerCommandOrigin12getRequestIdB5cxx11Ev;
    virtual void _ZNK29AutomationPlayerCommandOrigin7getNameB5cxx11Ev;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void AutomationgetPermissionsLevel(void)const;
    virtual void Automationclone(void)const;
    virtual void getCursorHitBlockPos(void)const;
    virtual void getCursorHitPos(void)const;
    virtual void AutomationhasChatPerms(void)const;
    virtual void AutomationhasTellPerms(void)const;
    virtual void canUseAbility(AbilitiesIndex)const;
    virtual void CommandOrigin::isWorldBuilder(void)const;
    virtual void CommandOrigin::canUseCommandsWithoutCheatsEnabled(void)const;
    virtual void isSelectorExpansionAllowed(void)const;
    virtual void AutomationgetSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void CommandOrigin::getOutputReceiver(void)const;
    virtual void AutomationgetOriginType(void)const;
    virtual void AutomationtoCommandOriginData(void)const;
    virtual void CommandOrigin::getUUID(void)const;
    virtual void CommandOrigin::handleCommandOutputCallback(Json::Value &&)const;
    virtual void CommandOrigin::_setUUID(mce::UUID const&);
}
