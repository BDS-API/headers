#pragma once



namespace Core {

    class LoadTimeData {

    public:
//      LoadTimeData(gsl::basic_string_span<char const, -1l>, int); //TODO: incomplete function definition // _ZN4Core12LoadTimeDataC2EN3gsl17basic_string_spanIKcLln1EEEi
        ~LoadTimeData(); // _ZN4Core12LoadTimeDataD2Ev
        LoadTimeData(Core::LoadTimeData &&); // _ZN4Core12LoadTimeDataC2EOS0_
        LoadTimeData(Core::LoadTimeData const&); // _ZN4Core12LoadTimeDataC2ERKS0_
    };
}
