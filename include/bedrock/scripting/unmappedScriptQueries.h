#pragma once

#include <memory>
#include "../ScriptObjectHandle.h"
#include <vector>
#include "../ScriptVersionInfo.h"
#include "./ScriptEngine.h"
#include <string>


class ScriptQueries {

public:

    ScriptQueries();
    ~ScriptQueries();
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &, std::string const&, std::string const&, std::string const&, std::string const&);
    void registerQuery(ScriptApi::ScriptVersionInfo const&, unsigned int &);
//  void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> &); //TODO: incomplete function definition
//  void getEntitiesFromQuery(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, entt::Registry<unsigned int> &, unsigned int, double, double, double, double, double, double, std::vector<ScriptApi::ScriptObjectHandle, std::allocator<ScriptApi::ScriptObjectHandle>> &); //TODO: incomplete function definition
    void addFilter(ScriptApi::ScriptVersionInfo const&, unsigned int, std::string const&);
};
