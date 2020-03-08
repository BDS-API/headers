#pragma once



using namespace ScriptApi;

class ScriptReport {

public:

    ScriptReport(void);
    void merge(ScriptApi::ScriptReport&&);
    void clear(void);
    void addError(void);
    void addError(std::string const&);
    void addError(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&);
    void addWarning(void);
    void addWarning(std::string const&);
    bool hasErrors(void)const;
    bool hasWarnings(void)const;
    void getReportItems(void)const;
};
