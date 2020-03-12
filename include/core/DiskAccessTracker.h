#pragma once

#include <ratio>
#include "Path.h"


namespace Core {

    class DiskAccessTracker {

    public:
        class WriteOperation;

        void _addNewWriteOperation(unsigned long);
        void getAverageNumberOfWritesPerSecond()const;
        void trackWriteOperation(Core::Path const&);
        void update();
        void trackWriteAmount(Core::Path const&, unsigned long);
//      DiskAccessTracker(std::chrono::duration<long, std::ratio<1l, 1000000000l>>, std::chrono::duration<long, std::ratio<1l, 1000000000l>>); //TODO: incomplete function definition
        void getAverageBytesWrittenPerSecond()const;
        void getDiskAccessTracker();
        void _ignoreWrite(Core::Path const&)const;
        void removeIgnoredPath(Core::Path const&);
        void addIgnoredPath(Core::Path const&);
        ~DiskAccessTracker();
        class WriteOperation {

        public:
            WriteOperation();
        };
    };
}
