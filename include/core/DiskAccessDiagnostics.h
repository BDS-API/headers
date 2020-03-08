#pragma once



using namespace Core;

class DiskAccessDiagnostics {

public:

    DiskAccessDiagnostics(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void update(double, double);
    void logWriteOperation(unsigned long const&);
};
