#pragma once

#include "ScriptBinderComponent.h"


class ScriptItemStackBinderComponent : ScriptBinderComponent {

public:
    static std::string TAG;
    static std::string COUNT;
    static std::string ITEM;
    static std::string UNDEFINED;

    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptItemStackBinderComponent();
    ScriptItemStackBinderComponent();
//  ScriptItemStackBinderComponent(entt::Registry<unsigned int> &, ItemInstance const&); //TODO: incomplete function definition
    void getIdentifier()const;
};
