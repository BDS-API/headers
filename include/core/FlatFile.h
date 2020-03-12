#pragma once

#include <memory>
#include <string>
#include "FileImpl.h"
#include "FileOpenMode.h"


namespace Core {

    class FlatFile : Core::FileImpl {

    public:
        virtual void _getRemainingSize(unsigned long *);
        virtual void _getBlockSize()const;
        virtual void _isOpen();
        virtual std::string _getPath()const;
        ~FlatFile();
        virtual void _flush();
        virtual void _getSize(unsigned long *);
        virtual void _read(void *, unsigned long, unsigned long *);
        virtual void _readExactly(void *, unsigned long);
        virtual void _getPosition(unsigned long *);
        virtual void _write(void const*, unsigned long);
        virtual void _skip(unsigned long);
        virtual void _setPosition(unsigned long);
        virtual void _close();
        virtual void _readAtPosition(unsigned long, void *, unsigned long, unsigned long *);
        FlatFile(Core::FileSystemImpl *, Core::FileOpenMode, std::unique_ptr<Core::FileImpl>, Core::Path const&, unsigned long, unsigned long);
    };
}
