#pragma once

#include "../../actor/Actor"
#include "../../level/Level"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"
#include "../unmapped/ScriptEngine"


class ScriptLevelWeatherComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    virtual ScriptLevelWeatherComponent::~ScriptLevelWeatherComponent()
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, bool &)const;

    void getHash();
    ScriptLevelWeatherComponent(void);
};
