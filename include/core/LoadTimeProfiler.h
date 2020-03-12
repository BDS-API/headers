#pragma once

#include "LoadTimeData.h"
#include "ScopedLoadTimeSection.h"


namespace Core {

    class LoadTimeProfiler {

    public:
        void endLogging();
        void popSection(Core::LoadTimeData &&);
//      void startLogging(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
        void update();
        void setEnabled(bool);
        ~LoadTimeProfiler();
        LoadTimeProfiler();
        void pushSection(Core::ScopedLoadTimeSection *);
        void getCurrentScope()const;
        bool isLogging()const;
    };
}
