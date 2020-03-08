#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/Block"
#include "../ScriptObjectHandle"
#include "../../actor/ItemActor"
#include "../../item/ItemInstance"
#include "../unmapped/ScriptEngine"


class ScriptIdentifierBinderComponent : ScriptBinderComponent {

public:
    static long TAG[abi:cxx11];

    virtual ScriptIdentifierBinderComponent::~ScriptIdentifierBinderComponent()
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptIdentifierBinderComponent(void);
    ScriptIdentifierBinderComponent(std::string const&);
    ScriptIdentifierBinderComponent(Actor const&);
    ScriptIdentifierBinderComponent(ItemActor const&);
    ScriptIdentifierBinderComponent(ItemInstance const&);
    ScriptIdentifierBinderComponent(Block const&);
};
