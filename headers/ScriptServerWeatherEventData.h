#pragma once

class ScriptServerWeatherEventData : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerWeatherEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerWeatherEventData(void);
    void setDimension(std::string const&);
    void setRaining(bool);
    void setLightning(bool);
};
