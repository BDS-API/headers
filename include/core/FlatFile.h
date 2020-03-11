#pragma once

#include "./FileOpenMode.h"
#include <memory>
#include "./FileImpl.h"
#include "./FileSystemImpl.h"
#include "./Path.h"
#include <string>


namespace Core {

class FlatFile : Core::FileImpl {

public:
    virtual ~FlatFile();
    virtual std::string _getPath()const;
    virtual void _getBlockSize()const;
    virtual void _isOpen();
    virtual void _close();
//  virtual void _read(void *, unsigned long, unsigned long *); //TODO: incomplete function definition
//  virtual void _readExactly(void *, unsigned long); //TODO: incomplete function definition
    virtual void _skip(unsigned long);
//  virtual void _readAtPosition(unsigned long, void *, unsigned long, unsigned long *); //TODO: incomplete function definition
    virtual void _getPosition(unsigned long *);
    virtual void _setPosition(unsigned long);
//  virtual void _write(void const*, unsigned long); //TODO: incomplete function definition
    virtual void _flush();
    virtual void _getSize(unsigned long *);
    virtual void _getRemainingSize(unsigned long *);

    FlatFile(Core::FileSystemImpl *, Core::FileOpenMode, std::unique_ptr<Core::FileImpl, std::default_delete<Core::FileImpl>>, Core::Path const&, unsigned long, unsigned long);
};

}