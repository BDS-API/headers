#pragma once



using namespace Core;

class ScopedLoadTimeSection {

public:

    ScopedLoadTimeSection(gsl::basic_string_span<char const, -1l>);
    void _accumulateTime();
    void pause();
    void resume();
};
