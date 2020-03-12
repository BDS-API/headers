#pragma once

#include "ScriptCallbackInterface.h"
#include "ScriptObjectHandle.h"
#include <vector>
#include <string>


namespace ScriptApi {

    class ScriptFramework {

    public:
        virtual void initialize();
        ~ScriptFramework();
        virtual void shutdown();
        void setValue(ScriptApi::ScriptObjectHandle &, long);
        void registerConsole(ScriptApi::ScriptCallbackInterface &);
        void setValue(ScriptApi::ScriptObjectHandle &, double);
        void setValue(ScriptApi::ScriptObjectHandle &, int);
        void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::string> &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool);
        ScriptFramework();
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int);
        void getValue(ScriptApi::ScriptObjectHandle const&, double &);
        void createObject(ScriptApi::ScriptObjectHandle &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle const&);
        void createNull(ScriptApi::ScriptObjectHandle &);
        void getScriptReportQueue()const;
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle &);
        void getValue(ScriptApi::ScriptObjectHandle const&, int &);
        void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle &);
        void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle &);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double &);
//      void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &); //TODO: incomplete function definition
        void createUndefined(ScriptApi::ScriptObjectHandle &);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string const&);
        bool hasMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &);
        void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&);
        void setValue(ScriptApi::ScriptObjectHandle &, bool);
        void getValue(ScriptApi::ScriptObjectHandle const&, long &);
        bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &);
        void runScript(std::string const&, std::string const&);
        void getGlobalObject(ScriptApi::ScriptObjectHandle &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long &);
        void getValue(ScriptApi::ScriptObjectHandle const&, std::string &);
        void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &);
        void createArray(ScriptApi::ScriptObjectHandle &, int);
        void registerGlobalAPI(std::string const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptObjectHandle &);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string &);
        void setValue(ScriptApi::ScriptObjectHandle &, std::string const&);
        void getValue(ScriptApi::ScriptObjectHandle const&, bool &);
    };
}
