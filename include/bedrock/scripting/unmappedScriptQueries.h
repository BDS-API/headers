#pragma once

#include "../ScriptObjectHandle"
#include "../ScriptVersionInfo"


class ScriptQueries {

public:

    ScriptQueries(void);
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &, std::string const&, std::string const&, std::string const&, std::string const&);
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &);
    void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> &);
    void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, double, double, double, double, double, double, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> &);
    void addFilter(ScriptApi::ScriptVersionInfo const&, unsigned int, std::string const&);
};
