#pragma once

class ScriptComponentBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptComponentBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptComponentBinderComponent(void);
    void ScriptComponentBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData(void)const;
};
