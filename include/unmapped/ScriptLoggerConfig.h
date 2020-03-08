#pragma once



class ScriptLoggerConfig {

public:

    ScriptLoggerConfig(void);
    void set(ScriptLogType, bool);
    void get(ScriptLogType)const;
};
