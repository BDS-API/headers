#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "../unmapped/ScriptEngine.h"
#include "../../actor/Actor.h"
#include "../../actor/ItemActor.h"
#include "ScriptBinderComponent.h"


class ScriptEcsBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptEcsBinderComponent();
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    ScriptEcsBinderComponent(unsigned int);
    void getIdentifier()const;
    ScriptEcsBinderComponent();
//  ScriptEcsBinderComponent(entt::Registry<unsigned int> &, ItemActor const&); //TODO: incomplete function definition
//  ScriptEcsBinderComponent(entt::Registry<unsigned int> &, Actor const&); //TODO: incomplete function definition
};
