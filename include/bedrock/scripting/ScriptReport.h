#pragma once

#include <string>
#include <memory>


namespace ScriptApi {

    class ScriptReport {

    public:
        bool hasWarnings()const;
        void addError();
        ~ScriptReport();
        void addWarning();
        ScriptReport();
        void addWarning(std::string const&);
        bool hasErrors()const;
        void merge(ScriptApi::ScriptReport &&);
//      void addError(std::unique_ptr<ScriptApi::JavaScriptErrorHandler> &&); //TODO: incomplete function definition
        void getReportItems()const;
        void addError(std::string const&);
        void clear();
    };
}
