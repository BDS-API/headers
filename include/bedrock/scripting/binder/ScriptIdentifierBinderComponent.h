#pragma once

#include "../../../unmapped/Block.h"
#include "./ScriptBinderComponent.h"
#include "../../actor/ItemActor.h"
#include "../unmapped/ScriptEngine.h"
#include "../../actor/Actor.h"
#include "../ScriptObjectHandle.h"
#include "../../item/ItemInstance.h"
#include <string>


class ScriptIdentifierBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptIdentifierBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptIdentifierBinderComponent();
    ScriptIdentifierBinderComponent(std::string const&);
    ScriptIdentifierBinderComponent(Actor const&);
    ScriptIdentifierBinderComponent(ItemActor const&);
    ScriptIdentifierBinderComponent(ItemInstance const&);
    ScriptIdentifierBinderComponent(Block const&);
    std::string getIdentifier()const;
};
