#pragma once

#include <ratio>


namespace Core {

class DiskAccessDiagnostics {

public:

//  DiskAccessDiagnostics(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
    void update(double, double);
    void logWriteOperation(unsigned long const&);
};

}