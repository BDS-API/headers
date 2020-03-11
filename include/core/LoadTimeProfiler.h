#pragma once

#include "./ScopedLoadTimeSection.h"
#include "./LoadTimeData.h"


namespace Core {

class LoadTimeProfiler {

public:

    void getCurrentScope()const;
    void pushSection(Core::ScopedLoadTimeSection *);
    void popSection(Core::LoadTimeData &&);
    LoadTimeProfiler();
//  void startLogging(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void endLogging();
    bool isLogging()const;
    void setEnabled(bool);
    void update();
    ~LoadTimeProfiler();
};

}