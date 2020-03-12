#pragma once

#include "Path.h"
#include "FileOpenMode.h"
#include "FileImpl.h"
#include "FileSystemImpl.h"
#include <memory>


namespace Core {

    class File_c : Core::FileImpl {

    public:
        virtual void _getSize(unsigned long *);
        virtual void _close();
        virtual void _getBlockSize()const;
        virtual void _isOpen();
        virtual std::string _getPath()const;
        virtual void _write(void const*, unsigned long);
        virtual void _getPosition(unsigned long *);
        virtual void _read(void *, unsigned long, unsigned long *);
        virtual void _skip(unsigned long);
        virtual void _setPosition(unsigned long);
        virtual void _getRemainingSize(unsigned long *);
        virtual void _readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
        virtual void _readExactly(void *, unsigned long);
        ~File_c();
        virtual void _flush();
//      void _open(std::unique_ptr<Core::File_c> &, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
//      File_c(_IO_FILE *, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode); //TODO: incomplete function definition
    };
}
