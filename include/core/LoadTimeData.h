#pragma once



namespace Core {

    class LoadTimeData {

    public:
        LoadTimeData(Core::LoadTimeData const&);
        LoadTimeData(Core::LoadTimeData &&);
//      LoadTimeData(gsl::basic_string_span<char const, -1l>, int); //TODO: incomplete function definition
        ~LoadTimeData();
    };
}
