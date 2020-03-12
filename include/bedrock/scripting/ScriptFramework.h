#pragma once

#include <string>
#include <vector>


namespace ScriptApi {

    class ScriptFramework {

    public:
        ~ScriptFramework();
        virtual void shutdown();
        virtual void initialize();
        void getGlobalObject(ScriptApi::ScriptObjectHandle &);
        void createArray(ScriptApi::ScriptObjectHandle &, int);
        void cloneObject(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectHandle &);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle &);
        void getValue(ScriptApi::ScriptObjectHandle const&, int &);
        void createNull(ScriptApi::ScriptObjectHandle &);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &);
        void getMemberNames(ScriptApi::ScriptObjectHandle const&, std::vector<std::string> &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long);
        bool hasMember(ScriptApi::ScriptObjectHandle const&, int const&, bool &);
        ScriptFramework();
        void getValue(ScriptApi::ScriptObjectHandle const&, bool &);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string &);
//      void getHandleType(ScriptApi::ScriptObjectHandle const&, ScriptApi::ScriptObjectType &); //TODO: incomplete function definition
        void getValue(ScriptApi::ScriptObjectHandle const&, long &);
        void setValue(ScriptApi::ScriptObjectHandle &, std::string const&);
        void getValue(ScriptApi::ScriptObjectHandle const&, std::string &);
        bool hasMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool &);
        void getMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle &);
        void setValue(ScriptApi::ScriptObjectHandle &, double);
        void registerGlobalAPI(std::string const&, ScriptApi::ScriptCallbackInterface &, ScriptApi::ScriptObjectHandle &);
        void createObject(ScriptApi::ScriptObjectHandle &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, bool);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double &);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int &);
        void setValue(ScriptApi::ScriptObjectHandle &, int);
        void setValue(ScriptApi::ScriptObjectHandle &, long);
        void setValue(ScriptApi::ScriptObjectHandle &, bool);
        void runScript(std::string const&, std::string const&);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, double);
        void setMember(ScriptApi::ScriptObjectHandle const&, int const&, ScriptApi::ScriptObjectHandle const&);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, int);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, ScriptApi::ScriptObjectHandle const&);
        void getMember(ScriptApi::ScriptObjectHandle const&, std::string const&, long &);
        void setMember(ScriptApi::ScriptObjectHandle const&, std::string const&, std::string const&);
        void getArrayLength(ScriptApi::ScriptObjectHandle const&, int &);
        void createUndefined(ScriptApi::ScriptObjectHandle &);
        void getValue(ScriptApi::ScriptObjectHandle const&, double &);
        void registerConsole(ScriptApi::ScriptCallbackInterface &);
        void getScriptReportQueue()const;
    };
}
