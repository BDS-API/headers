#pragma once

#include "FileSystemImpl.h"
#include "Path.h"


namespace Core {

    namespace FullCopyFileOperations {

        void moveFileOrDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void moveFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void copyDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void moveDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void copyFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
    };
}
