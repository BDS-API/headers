#pragma once



class TaskStartInfo {

public:
    static long NoAffinity;


    TaskStartInfo(gsl::basic_string_span<char const, -1l>);
    void startWithDelay(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    bool isOptionSet(TaskOptions);
    void setOption(TaskOptions);
};
