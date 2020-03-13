#pragma once



namespace Core {

    namespace BufferedFileOperations {

        void copyFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22BufferedFileOperations8copyFileEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void copyFileWithLimit(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&, unsigned long, unsigned long &, unsigned long &); // _ZN4Core22BufferedFileOperations17copyFileWithLimitEPNS_14FileSystemImplERKNS_4PathES2_S5_mRmS6_
        void moveFile(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22BufferedFileOperations8moveFileEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void copyDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22BufferedFileOperations13copyDirectoryEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void moveDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22BufferedFileOperations13moveDirectoryEPNS_14FileSystemImplERKNS_4PathES2_S5_
        void moveFileOrDirectory(Core::FileSystemImpl *, Core::Path const&, Core::FileSystemImpl *, Core::Path const&); // _ZN4Core22BufferedFileOperations19moveFileOrDirectoryEPNS_14FileSystemImplERKNS_4PathES2_S5_
    };
}
