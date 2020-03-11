#pragma once

#include "./Path.h"
#include "./FileSystemImpl.h"


namespace Core {

class BufferedFileOperations {

public:

    void copyFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
    void copyFileWithLimit(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, unsigned long, unsigned long &, unsigned long &);
    void moveFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
    void copyDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
    void moveDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
    void moveFileOrDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
};

}