#pragma once



namespace Core {

    class DiskAccessDiagnostics {

    public:
//      DiskAccessDiagnostics(std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition // _ZN4Core21DiskAccessDiagnosticsC2ENSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEE
        void update(double, double); // _ZN4Core21DiskAccessDiagnostics6updateEdd
        void logWriteOperation(unsigned long const&); // _ZN4Core21DiskAccessDiagnostics17logWriteOperationERKm
    };
}
