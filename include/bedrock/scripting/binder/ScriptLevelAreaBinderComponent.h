#pragma once

#include "../../../mce/UUID"
#include "../unmapped/ScriptEngine"
#include "../ScriptObjectHandle"
#include "../../level/tickingarea/ITickingArea"


class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    ScriptLevelAreaBinderComponent::~ScriptLevelAreaBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptLevelAreaBinderComponent(void);
    ScriptLevelAreaBinderComponent(mce::UUID const&);
    ScriptLevelAreaBinderComponent(ITickingArea const&);
    void getIdentifier()const;
};
