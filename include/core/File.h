#pragma once

#include "Path.h"
#include "FileOpenMode.h"
#include "FileImpl.h"
#include "FileSystemImpl.h"
#include <memory>
#include <vector>


namespace Core {

    class File {

    public:
        void read(void *, unsigned long, unsigned long *);
        File();
        File(Core::File &&);
        void skip(unsigned long);
        void getPosition(unsigned long *);
        void cleanPathSeparators(Core::Path);
        void getSize(unsigned long *);
        void flush();
        void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, std::vector<unsigned char> const&);
        void getBlockSize()const;
        void write(void const*, unsigned long);
        void readExactly(void *, unsigned long);
        File(std::unique_ptr<Core::FileImpl> &&, std::unique_ptr<Core::FileSystemImpl> &&);
        void setLoggingEnabled(bool);
//      void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
        void setPosition(unsigned long);
        bool isNearTransactionLimit(unsigned long)const;
        void close();
        bool isOpen()const;
        void cleanPath(Core::Path);
        void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, unsigned char const*);
        ~File();
        void readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
        void getRemainingSize(unsigned long *);
    };
}
