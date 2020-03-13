#pragma once

#include <string>
#include "Path.h"


namespace Core {

    class DirectoryIterationItem {

    public:
//      DirectoryIterationItem(Core::DirectoryIterationFlags); //TODO: incomplete function definition // _ZN4Core22DirectoryIterationItemC2ENS_23DirectoryIterationFlagsE
        void getFileSize()const; // _ZNK4Core22DirectoryIterationItem11getFileSizeEv
        void setFileSize(unsigned long); // _ZN4Core22DirectoryIterationItem11setFileSizeEm
        void getFileSizeAllocationOnDisk()const; // _ZNK4Core22DirectoryIterationItem27getFileSizeAllocationOnDiskEv
        void setFileSizeAllocationOnDisk(unsigned long); // _ZN4Core22DirectoryIterationItem27setFileSizeAllocationOnDiskEm
        std::string getFullPathName()const; // _ZNK4Core22DirectoryIterationItem15getFullPathNameB5cxx11Ev
        void setName(Core::PathPart const&); // _ZN4Core22DirectoryIterationItem7setNameERKNS_8PathPartE
        void getName()const; // _ZNK4Core22DirectoryIterationItem7getNameEv
        void setFullPathName(Core::Path); // _ZN4Core22DirectoryIterationItem15setFullPathNameENS_4PathE
        void getType()const; // _ZNK4Core22DirectoryIterationItem7getTypeEv
//      void setType(Core::FileType); //TODO: incomplete function definition // _ZN4Core22DirectoryIterationItem7setTypeENS_8FileTypeE
        bool isDirectory()const; // _ZNK4Core22DirectoryIterationItem11isDirectoryEv
        bool isFile()const; // _ZNK4Core22DirectoryIterationItem6isFileEv
        void getCreateTime()const; // _ZNK4Core22DirectoryIterationItem13getCreateTimeEv
        void setCreateTime(long); // _ZN4Core22DirectoryIterationItem13setCreateTimeEl
        void getModifyTime()const; // _ZNK4Core22DirectoryIterationItem13getModifyTimeEv
        void setModifyTime(long); // _ZN4Core22DirectoryIterationItem13setModifyTimeEl
        ~DirectoryIterationItem(); // _ZN4Core22DirectoryIterationItemD2Ev
    };
}
