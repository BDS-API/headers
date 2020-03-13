#pragma once



namespace Core {

    class DiskAccessTracker {

    public:
        class WriteOperation;

//      DiskAccessTracker(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition // _ZN4Core17DiskAccessTrackerC2ENSt6chrono8durationIlSt5ratioILl1ELl1000000000EEEES5_
        void getDiskAccessTracker(); // _ZN4Core17DiskAccessTracker20getDiskAccessTrackerEv
        void trackWriteOperation(Core::Path const&); // _ZN4Core17DiskAccessTracker19trackWriteOperationERKNS_4PathE
        void _ignoreWrite(Core::Path const&)const; // _ZNK4Core17DiskAccessTracker12_ignoreWriteERKNS_4PathE
        void _addNewWriteOperation(unsigned long); // _ZN4Core17DiskAccessTracker21_addNewWriteOperationEm
        void trackWriteAmount(Core::Path const&, unsigned long); // _ZN4Core17DiskAccessTracker16trackWriteAmountERKNS_4PathEm
        void getAverageBytesWrittenPerSecond()const; // _ZNK4Core17DiskAccessTracker31getAverageBytesWrittenPerSecondEv
        void getAverageNumberOfWritesPerSecond()const; // _ZNK4Core17DiskAccessTracker33getAverageNumberOfWritesPerSecondEv
        void addIgnoredPath(Core::Path const&); // _ZN4Core17DiskAccessTracker14addIgnoredPathERKNS_4PathE
        void removeIgnoredPath(Core::Path const&); // _ZN4Core17DiskAccessTracker17removeIgnoredPathERKNS_4PathE
        void update(); // _ZN4Core17DiskAccessTracker6updateEv
        ~DiskAccessTracker(); // _ZN4Core17DiskAccessTrackerD2Ev
        class WriteOperation {

        public:
            WriteOperation(); // _ZN4Core17DiskAccessTracker14WriteOperationC2Ev
        };
    };
}
