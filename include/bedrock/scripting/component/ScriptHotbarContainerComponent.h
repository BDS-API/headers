#pragma once

#include "ScriptContainerComponentBase.h"


class ScriptHotbarContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptHotbarContainerComponent();
    void getHash();
    ScriptHotbarContainerComponent();
};
