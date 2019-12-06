#pragma once

class Core::DiskAccessDiagnostics {

public:

    void DiskAccessDiagnostics(std::chrono::duration<long, std::ratio<1l, 1000000000l>>);
    void update(double, double);
    void logWriteOperation(unsigned long const&);
};
