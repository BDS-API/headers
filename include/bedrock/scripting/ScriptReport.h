#pragma once



using namespace ScriptApi;

class ScriptReport {

public:

    ScriptReport(void);
    void merge(ScriptApi::ScriptReport&&);
    void clear();
    void addError();
    void addError(std::string const&);
    void addError(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&);
    void addWarning();
    void addWarning(std::string const&);
    bool hasErrors()const;
    bool hasWarnings()const;
    void getReportItems()const;
};
