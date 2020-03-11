#pragma once



namespace Core {

class ScopedLoadTimeSection {

public:

//  ScopedLoadTimeSection(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    ~ScopedLoadTimeSection();
    void _accumulateTime();
    void pause();
    void resume();
};

}