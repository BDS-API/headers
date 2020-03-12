#pragma once



namespace Core {

    class DiskAccessTracker {

    public:
        class WriteOperation;

        void trackWriteAmount(Core::Path const&, unsigned long);
        void getDiskAccessTracker();
        void _ignoreWrite(Core::Path const&)const;
        void update();
        ~DiskAccessTracker();
        void _addNewWriteOperation(unsigned long);
        void trackWriteOperation(Core::Path const&);
        void getAverageNumberOfWritesPerSecond()const;
        void addIgnoredPath(Core::Path const&);
//      DiskAccessTracker(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
        void getAverageBytesWrittenPerSecond()const;
        void removeIgnoredPath(Core::Path const&);
        class WriteOperation {

        public:
            WriteOperation();
        };
    };
}
