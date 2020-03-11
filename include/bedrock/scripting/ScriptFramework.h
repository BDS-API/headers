#pragma once

#include <memory>
#include "./ScriptObjectHandle.h"
#include <vector>
#include "./ScriptCallbackInterface.h"
#include <string>


namespace ScriptApi {

class ScriptFramework {

public:
    virtual ~ScriptFramework();
    virtual void initialize();
    virtual void shutdown();

    ScriptFramework();
    void runScript(std::string const&, std::string const&);
    void getScriptReportQueue()const;
    void createObject(ScriptApi::ScriptObjectHandle &);
    void createArray(ScriptApi::ScriptObjectHandle &, int);
    void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle &);
    bool hasMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &);
    bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle const&);
    void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int);
    void setValue(ScriptApi::ScriptObjectHandle &, int);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long);
    void setValue(ScriptApi::ScriptObjectHandle &, long);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double);
    void setValue(ScriptApi::ScriptObjectHandle &, double);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool);
    void setValue(ScriptApi::ScriptObjectHandle &, bool);
    void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string const&);
    void setValue(ScriptApi::ScriptObjectHandle &, std::string const&);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle &);
    void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int &);
    void getValue(ScriptApi::ScriptObjectHandle const&, int &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long &);
    void getValue(ScriptApi::ScriptObjectHandle const&, long &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double &);
    void getValue(ScriptApi::ScriptObjectHandle const&, double &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &);
    void getValue(ScriptApi::ScriptObjectHandle const&, bool &);
    void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string &);
    void getValue(ScriptApi::ScriptObjectHandle const&, std::string &);
//  void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &); //TODO: incomplete function definition
    void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &);
    void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::string, std::allocator<std::string>> &);
    void getGlobalObject(ScriptApi::ScriptObjectHandle &);
    void createUndefined(ScriptApi::ScriptObjectHandle &);
    void createNull(ScriptApi::ScriptObjectHandle &);
    void registerGlobalAPI(std::string const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptObjectHandle &);
    void registerConsole(ScriptApi::ScriptCallbackInterface &);
};

}