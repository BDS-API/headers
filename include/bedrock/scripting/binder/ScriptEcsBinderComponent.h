#pragma once

#include "ScriptBinderComponent.h"


class ScriptEcsBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;

    ~ScriptEcsBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
//  ScriptEcsBinderComponent(entt::Registry<unsigned int> &, ItemActor const&); //TODO: incomplete function definition
    ScriptEcsBinderComponent();
    ScriptEcsBinderComponent(unsigned int);
    void getIdentifier()const;
//  ScriptEcsBinderComponent(entt::Registry<unsigned int> &, Actor const&); //TODO: incomplete function definition
};
