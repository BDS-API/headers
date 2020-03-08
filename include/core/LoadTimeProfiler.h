#pragma once



using namespace Core;

class LoadTimeProfiler {

public:

    void getCurrentScope(void)const;
    void pushSection(Core::ScopedLoadTimeSection *);
    void popSection(Core::LoadTimeData &&);
    LoadTimeProfiler(void);
    void startLogging(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    void endLogging(void);
    bool isLogging(void)const;
    void setEnabled(bool);
    void update(void);
};
