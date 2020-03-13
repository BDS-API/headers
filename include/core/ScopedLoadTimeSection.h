#pragma once



namespace Core {

    class ScopedLoadTimeSection {

    public:
//      ScopedLoadTimeSection(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Core21ScopedLoadTimeSectionC2EN3gsl17basic_string_spanIKcLln1EEE
        ~ScopedLoadTimeSection(); // _ZN4Core21ScopedLoadTimeSectionD2Ev
        void _accumulateTime(); // _ZN4Core21ScopedLoadTimeSection15_accumulateTimeEv
        void pause(); // _ZN4Core21ScopedLoadTimeSection5pauseEv
        void resume(); // _ZN4Core21ScopedLoadTimeSection6resumeEv
    };
}
