#pragma once

#include "../ScriptVersionInfo"
#include "../../level/Level"
#include "../../actor/Actor"
#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"
#include "../unmapped/ScriptServerContext"


class ScriptLevelWeatherComponent : ScriptTemplateFactory<ScriptServerContext>::Component {

public:
    static long mHash;

    ScriptLevelWeatherComponent::~ScriptLevelWeatherComponent()
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, ScriptApi::ScriptObjectHandle &)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Level &, bool &)const;

    void getHash();
    ScriptLevelWeatherComponent(void);
};
