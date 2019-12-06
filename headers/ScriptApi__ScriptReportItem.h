#pragma once

class ScriptApi::ScriptReportItem {

public:

    void ScriptReportItem(void);
    void ScriptReportItem(ScriptApi::ScriptReportItemType);
    void ScriptReportItem(ScriptApi::ScriptReportItemType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ScriptReportItem(std::unique_ptr<ScriptApi::JavaScriptErrorHandler, std::default_delete<ScriptApi::JavaScriptErrorHandler>> &&);
    void setType(ScriptApi::ScriptReportItemType);
    void getType(void)const;
    void getErrorHandler(void)const;
};
