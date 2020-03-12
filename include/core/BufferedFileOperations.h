#pragma once



namespace Core {

    namespace BufferedFileOperations {

        void moveDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void moveFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void moveFileOrDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void copyFileWithLimit(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, unsigned long, unsigned long &, unsigned long &);
        void copyFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
        void copyDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&);
    };
}
