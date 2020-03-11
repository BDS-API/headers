#pragma once

#include "./ScriptBinderComponent.h"
#include "../../actor/ItemActor.h"
#include "../unmapped/ScriptEngine.h"
#include "../../actor/Actor.h"
#include "../ScriptObjectHandle.h"


class ScriptEcsBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    virtual ~ScriptEcsBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    ScriptEcsBinderComponent();
    ScriptEcsBinderComponent(unsigned int);
//  ScriptEcsBinderComponent(entt::Registry<unsigned int> &, Actor const&); //TODO: incomplete function definition
//  ScriptEcsBinderComponent(entt::Registry<unsigned int> &, ItemActor const&); //TODO: incomplete function definition
    void getIdentifier()const;
};
