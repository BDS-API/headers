#pragma once

#include "./LoadTimeData.h"


namespace Core {

class LoadTimeData {

public:

//  LoadTimeData(gsl::basic_string_span<char const, -1l>, int); //TODO: incomplete function definition
    ~LoadTimeData();
    LoadTimeData(Core::LoadTimeData &&);
    LoadTimeData(Core::LoadTimeData const&);
};

}