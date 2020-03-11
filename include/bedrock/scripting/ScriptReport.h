#pragma once

#include <memory>
#include "./ScriptReport.h"
#include <string>


namespace ScriptApi {

class ScriptReport {

public:

    ScriptReport();
    void merge(ScriptApi::ScriptReport &&);
    void clear();
    void addError();
    void addError(std::string const&);
//  void addError(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&); //TODO: incomplete function definition
    void addWarning();
    void addWarning(std::string const&);
    bool hasErrors()const;
    bool hasWarnings()const;
    void getReportItems()const;
    ~ScriptReport();
};

}