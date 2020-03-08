#pragma once



using namespace Core;

class LoadTimeData {

public:

    LoadTimeData(gsl::basic_string_span<char const, -1l>, int);
    LoadTimeData(Core::LoadTimeData&&);
    LoadTimeData(Core::LoadTimeData const&);
};
