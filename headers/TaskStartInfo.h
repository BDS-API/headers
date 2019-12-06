#pragma once

class TaskStartInfo {

public:
    static long TaskStartInfo::NoAffinity;


    void TaskStartInfo(gsl::basic_string_span<char const, -1l>);
    bool isOptionSet(TaskOptions);
    void setOption(TaskOptions);
};
