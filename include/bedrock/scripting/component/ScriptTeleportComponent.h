#pragma once

#include "../../../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"


class ScriptTeleportComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    virtual ScriptTeleportComponent::~ScriptTeleportComponent();
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;

    void getHash(void);
    ScriptTeleportComponent(void);
};
