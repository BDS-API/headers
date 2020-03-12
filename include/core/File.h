#pragma once

#include <memory>
#include "Path.h"
#include <vector>
#include "FileOpenMode.h"


namespace Core {

    class File {

    public:
        bool isNearTransactionLimit(unsigned long)const;
        void getBlockSize()const;
        bool isOpen()const;
        void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, std::vector<unsigned char> const&);
        void cleanPathSeparators(Core::Path);
        File(Core::File &&);
        void getRemainingSize(unsigned long *);
        void readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
        void flush();
        void writeCreateOrAppendFileData(Core::Path, unsigned long, unsigned long, unsigned char const*);
//      void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
        void write(void const*, unsigned long);
        File();
        void getPosition(unsigned long *);
        void cleanPath(Core::Path);
        File(std::unique_ptr<Core::FileImpl> &&, std::unique_ptr<Core::FileSystemImpl> &&);
        void readExactly(void *, unsigned long);
        void skip(unsigned long);
        void getSize(unsigned long *);
        void setLoggingEnabled(bool);
        void close();
        void read(void *, unsigned long, unsigned long *);
        void setPosition(unsigned long);
        ~File();
    };
}
