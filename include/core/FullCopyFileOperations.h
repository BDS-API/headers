#pragma once



namespace Core {

    namespace FullCopyFileOperations {

        void copyFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22FullCopyFileOperations8copyFileEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void copyDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22FullCopyFileOperations13copyDirectoryEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void moveFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22FullCopyFileOperations8moveFileEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void moveDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22FullCopyFileOperations13moveDirectoryEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void moveFileOrDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22FullCopyFileOperations19moveFileOrDirectoryEPNS_14FileSystemImplERKNS_4PathES2_S5_
    };
}
