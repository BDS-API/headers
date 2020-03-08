#pragma once

#include "../ScriptVersionInfo"
#include "../../actor/Actor"
#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"


class ScriptDamageSensorComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    ScriptDamageSensorComponent::~ScriptDamageSensorComponent()
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash();
    ScriptDamageSensorComponent(void);
};
