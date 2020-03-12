#pragma once

#include "PathPart.h"
#include "Path.h"


namespace Core {

    class DirectoryIterationItem {

    public:
//      void setType(Core::FileType); //TODO: incomplete function definition
        void getModifyTime()const;
        void setFileSize(unsigned long);
//      DirectoryIterationItem(Core::DirectoryIterationFlags); //TODO: incomplete function definition
        void setFullPathName(Core::Path);
        void getCreateTime()const;
        void setModifyTime(long);
        void setName(Core::PathPart const&);
        bool isDirectory()const;
        ~DirectoryIterationItem();
        std::string getFullPathName()const;
        void setCreateTime(long);
        void getFileSize()const;
        bool isFile()const;
        void getType()const;
        void getName()const;
        void setFileSizeAllocationOnDisk(unsigned long);
        void getFileSizeAllocationOnDisk()const;
    };
}
