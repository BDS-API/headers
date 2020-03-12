#pragma once



namespace Core {

    class ScopedLoadTimeSection {

    public:
        ~ScopedLoadTimeSection();
        void resume();
//      ScopedLoadTimeSection(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
        void pause();
        void _accumulateTime();
    };
}
