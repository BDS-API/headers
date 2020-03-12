#pragma once

#include <string>
#include "ScriptBinderComponent.h"


class ScriptIdentifierBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ~ScriptIdentifierBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ScriptIdentifierBinderComponent(ItemActor const&);
    ScriptIdentifierBinderComponent(Block const&);
    ScriptIdentifierBinderComponent(ItemInstance const&);
    ScriptIdentifierBinderComponent(std::string const&);
    ScriptIdentifierBinderComponent(Actor const&);
    ScriptIdentifierBinderComponent();
    std::string getIdentifier()const;
};
