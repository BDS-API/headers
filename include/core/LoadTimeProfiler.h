#pragma once



namespace Core {

    class LoadTimeProfiler {

    public:
        void getCurrentScope()const; // _ZNK4Core16LoadTimeProfiler15getCurrentScopeEv
        void pushSection(Core::ScopedLoadTimeSection *); // _ZN4Core16LoadTimeProfiler11pushSectionEPNS_21ScopedLoadTimeSectionE
        void popSection(Core::LoadTimeData &&); // _ZN4Core16LoadTimeProfiler10popSectionEONS_12LoadTimeDataE
        LoadTimeProfiler(); // _ZN4Core16LoadTimeProfilerC2Ev
//      void startLogging(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Core16LoadTimeProfiler12startLoggingEN3gsl17basic_string_spanIKcLln1EEES4_S4_
        void endLogging(); // _ZN4Core16LoadTimeProfiler10endLoggingEv
        bool isLogging()const; // _ZNK4Core16LoadTimeProfiler9isLoggingEv
        void setEnabled(bool); // _ZN4Core16LoadTimeProfiler10setEnabledEb
        void update(); // _ZN4Core16LoadTimeProfiler6updateEv
        ~LoadTimeProfiler(); // _ZN4Core16LoadTimeProfilerD2Ev
    };
}
