#pragma once

#include "../ScriptObjectHandle.h"
#include <string>
#include "ScriptEngine.h"
#include <vector>
#include "../ScriptVersionInfo.h"


class ScriptQueries {

public:
    ScriptQueries();
    ~ScriptQueries();
//  void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, std::vector<ScriptApi::ScriptObjectHandle> &); //TODO: incomplete function definition
    void addFilter(ScriptApi::ScriptVersionInfo const&, unsigned int, std::string const&);
//  void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, double, double, double, double, double, double, std::vector<ScriptApi::ScriptObjectHandle> &); //TODO: incomplete function definition
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &);
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &, std::string const&, std::string const&, std::string const&, std::string const&);
};
