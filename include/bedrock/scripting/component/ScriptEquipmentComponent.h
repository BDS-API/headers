#pragma once

#include "../../../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"


class ScriptEquipmentComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    virtual ScriptEquipmentComponent::~ScriptEquipmentComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash(void);
    ScriptEquipmentComponent(void);
};
