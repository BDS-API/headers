#pragma once

#include "Path.h"
#include "FileOpenMode.h"
#include "FileImpl.h"
#include "FileSystemImpl.h"
#include <memory>


namespace Core {

    class FlatFile : Core::FileImpl {

    public:
        virtual void _close();
        virtual void _flush();
        ~FlatFile();
        virtual void _getRemainingSize(unsigned long *);
        virtual void _readExactly(void *, unsigned long);
        virtual void _getPosition(unsigned long *);
        virtual void _skip(unsigned long);
        virtual void _isOpen();
        virtual std::string _getPath()const;
        virtual void _write(void const*, unsigned long);
        virtual void _getBlockSize()const;
        virtual void _readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
        virtual void _read(void *, unsigned long, unsigned long *);
        virtual void _setPosition(unsigned long);
        virtual void _getSize(unsigned long *);
        FlatFile(Core::FileSystemImpl *, Core::FileOpenMode, std::unique_ptr<Core::FileImpl>, Core::Path const&, unsigned long, unsigned long);
    };
}
