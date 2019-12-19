#pragma once

class TaskStartInfo {

public:
    static long NoAffinity;


    TaskStartInfo(gsl::basic_string_span<char const, -1l>);
    bool isOptionSet(TaskOptions);
    void setOption(TaskOptions);
};
