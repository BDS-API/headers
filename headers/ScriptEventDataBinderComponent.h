#pragma once

class ScriptEventDataBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptEventDataBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptEventDataBinderComponent(void);
    void ScriptEventDataBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData(void)const;
};
