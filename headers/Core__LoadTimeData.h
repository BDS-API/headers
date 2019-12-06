#pragma once

class Core::LoadTimeData {

public:

    void LoadTimeData(gsl::basic_string_span<char const, -1l>, int);
    void LoadTimeData(Core::LoadTimeData&&);
    void LoadTimeData(Core::LoadTimeData const&);
};
