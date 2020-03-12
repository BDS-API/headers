#pragma once

#include "ScriptContainerComponentBase.h"


class ScriptInventoryContainerComponent : ScriptContainerComponentBase {

public:
    static long mHash;

    virtual void retrieveComponentFrom(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle &)const;
    virtual void applyComponentTo(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, ScriptApi::ScriptObjectHandle const&)const;
    virtual bool hasComponent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, Actor &, bool &)const;
    ~ScriptInventoryContainerComponent();
    ScriptInventoryContainerComponent();
    void getHash();
};
