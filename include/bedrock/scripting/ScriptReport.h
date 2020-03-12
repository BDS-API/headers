#pragma once

#include <memory>
#include <string>


namespace ScriptApi {

    class ScriptReport {

    public:
        void addWarning();
        void addError(std::unique_ptr<ScriptApi::JavaScriptErrorHandler> &&);
        ~ScriptReport();
        bool hasErrors()const;
        void clear();
        void merge(ScriptApi::ScriptReport &&);
        void addWarning(std::string const&);
        void addError(std::string const&);
        ScriptReport();
        bool hasWarnings()const;
        void getReportItems()const;
        void addError();
    };
}
