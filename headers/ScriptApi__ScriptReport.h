#pragma once

class ScriptApi::ScriptReport {

public:

    void ScriptReport(void);
    void merge(ScriptApi::ScriptReport&&);
    void clear(void);
    void addError(void);
    void addError(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addError(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&);
    void addWarning(void);
    void addWarning(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool hasErrors(void)const;
    bool hasWarnings(void)const;
    void getReportItems(void)const;
};
