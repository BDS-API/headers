#pragma once

#include "./FileOpenMode.h"
#include <memory>
#include "./FileImpl.h"
#include "./FileSystemImpl.h"
#include "./File_c.h"
#include "./Path.h"
#include <string>


namespace Core {

class File_c : Core::FileImpl {

public:
    virtual ~File_c();
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

//  File_c(_IO_FILE *, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode); //TODO: incomplete function definition
//  void _open(std::unique_ptr<Core::File_c, std::default_delete<Core::File_c>> &, Core::FileSystemImpl *, Core::Path const&, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition
};

}