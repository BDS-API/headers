#pragma once

#include "./ScriptBinderComponent.h"
#include "../../../mce/UUID.h"
#include "../unmapped/ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include "../../level/tickingarea/ITickingArea.h"


class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptLevelAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptLevelAreaBinderComponent();
    ScriptLevelAreaBinderComponent(mce::UUID const&);
    ScriptLevelAreaBinderComponent(ITickingArea const&);
    void getIdentifier()const;
};
