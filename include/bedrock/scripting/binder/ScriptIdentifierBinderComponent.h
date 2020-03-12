#pragma once

#include "../../../unmapped/Block.h"
#include "../ScriptObjectHandle.h"
#include <string>
#include "../../item/ItemInstance.h"
#include "../unmapped/ScriptEngine.h"
#include "../../actor/Actor.h"
#include "../../actor/ItemActor.h"
#include "ScriptBinderComponent.h"


class ScriptIdentifierBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptIdentifierBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptIdentifierBinderComponent(Actor const&);
    std::string getIdentifier()const;
    ScriptIdentifierBinderComponent(ItemActor const&);
    ScriptIdentifierBinderComponent(Block const&);
    ScriptIdentifierBinderComponent();
    ScriptIdentifierBinderComponent(ItemInstance const&);
    ScriptIdentifierBinderComponent(std::string const&);
};
