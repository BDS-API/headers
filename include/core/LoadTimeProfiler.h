#pragma once



namespace Core {

    class LoadTimeProfiler {

    public:
        void endLogging();
        void getCurrentScope()const;
//      void startLogging(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
        void popSection(Core::LoadTimeData &&);
        LoadTimeProfiler();
        void setEnabled(bool);
        bool isLogging()const;
        void update();
        ~LoadTimeProfiler();
        void pushSection(Core::ScopedLoadTimeSection *);
    };
}
