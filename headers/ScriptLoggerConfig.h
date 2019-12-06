#pragma once

class ScriptLoggerConfig {

public:

    void ScriptLoggerConfig(void);
    void set(ScriptLogType, bool);
    void get(ScriptLogType)const;
};
