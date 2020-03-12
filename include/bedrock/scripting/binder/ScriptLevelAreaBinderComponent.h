#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "../../../mce/UUID.h"
#include "../unmapped/ScriptEngine.h"
#include "../../level/tickingarea/ITickingArea.h"
#include "ScriptBinderComponent.h"


class ScriptLevelAreaBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptLevelAreaBinderComponent();
    ScriptLevelAreaBinderComponent(mce::UUID const&);
    void getIdentifier()const;
    ScriptLevelAreaBinderComponent(ITickingArea const&);
    ScriptLevelAreaBinderComponent();
};
