#pragma once

#include <string>
#include "FileOpenMode.h"


namespace Core {

    class FileImpl {

    public:
        ~FileImpl();
        void getLoggingEnabled()const;
        void notifyChangeInFileSize(long, long);
        void write(void const*, unsigned long);
        void close();
        void _writeOperation(Core::Result &&, unsigned long);
        void getTransaction();
        void getBlockSize()const;
        void _readOperation(Core::Result &&, unsigned long);
        void getRemainingSize(unsigned long *);
        void getOpenMode()const;
        void getSize(unsigned long *);
        void skip(unsigned long);
        void readExactly(void *, unsigned long);
        void flush();
        void readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
        void getPosition(unsigned long *);
        void setPosition(unsigned long);
        void getNumFiles();
        std::string getPath()const;
        FileImpl(Core::FileSystemImpl *, Core::FileOpenMode);
        void read(void *, unsigned long, unsigned long *);
        bool isOpen();
        void setLoggingEnabled(bool);
    };
}
