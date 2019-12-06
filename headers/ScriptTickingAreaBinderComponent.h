#pragma once

class ScriptTickingAreaBinderComponent : ScriptBinderComponent {

public:
    virtual ~ScriptTickingAreaBinderComponent();
    virtual void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    virtual void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);

    void ScriptTickingAreaBinderComponent(void);
    void ScriptTickingAreaBinderComponent(ScriptApi::ScriptObjectHandle &&);
    void getData(void)const;
};
