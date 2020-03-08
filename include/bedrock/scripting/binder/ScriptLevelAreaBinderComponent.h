#pragma once

#include "../../../unmapped/ScriptEngine"
#include "../../../mce/UUID"
#include "../../level/tickingarea/ITickingArea"


class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptLevelAreaBinderComponent::~ScriptLevelAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptLevelAreaBinderComponent(void);
    ScriptLevelAreaBinderComponent(mce::UUID const&);
    ScriptLevelAreaBinderComponent(ITickingArea const&);
    void getIdentifier(void)const;
};
