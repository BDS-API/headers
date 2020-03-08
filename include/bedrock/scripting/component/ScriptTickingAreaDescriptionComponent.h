#pragma once

#include "../../actor/Actor"
#include "../../level/tickingarea/ITickingArea"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"


class ScriptTickingAreaDescriptionComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    virtual ScriptTickingAreaDescriptionComponent::~ScriptTickingAreaDescriptionComponent()
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, ITickingArea &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, ITickingArea &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, ITickingArea const&, bool &)const;

    void getHash();
    ScriptTickingAreaDescriptionComponent(void);
};
