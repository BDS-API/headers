#pragma once

#include "Result.h"
#include "FileOpenMode.h"
#include "FileSystemImpl.h"


namespace Core {

    class FileImpl {

    public:
        ~FileImpl();
        bool isOpen();
        void flush();
        void readExactly(void *, unsigned long);
        void close();
        void setPosition(unsigned long);
        FileImpl(Core::FileSystemImpl *, Core::FileOpenMode);
        void getLoggingEnabled()const;
        void skip(unsigned long);
        void getNumFiles();
        void getOpenMode()const;
        void getTransaction();
        void notifyChangeInFileSize(long, long);
        std::string getPath()const;
        void read(void *, unsigned long, unsigned long *);
        void getSize(unsigned long *);
        void getBlockSize()const;
        void getPosition(unsigned long *);
        void getRemainingSize(unsigned long *);
        void setLoggingEnabled(bool);
        void _writeOperation(Core::Result &&, unsigned long);
        void readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
        void write(void const*, unsigned long);
        void _readOperation(Core::Result &&, unsigned long);
    };
}
