#pragma once



namespace Core {

    class DiskAccessDiagnostics {

    public:
        void logWriteOperation(unsigned long const&);
//      DiskAccessDiagnostics(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
        void update(double, double);
    };
}
