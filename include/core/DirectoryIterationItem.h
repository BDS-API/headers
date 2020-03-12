#pragma once

#include <string>
#include "Path.h"


namespace Core {

    class DirectoryIterationItem {

    public:
        void setName(Core::PathPart const&);
        void getFileSize()const;
        void setFileSize(unsigned long);
//      void setType(Core::FileType); //TODO: incomplete function definition
        bool isFile()const;
        bool isDirectory()const;
        std::string getFullPathName()const;
        ~DirectoryIterationItem();
        void getFileSizeAllocationOnDisk()const;
        void getCreateTime()const;
        void getModifyTime()const;
        void setFileSizeAllocationOnDisk(unsigned long);
        void setFullPathName(Core::Path);
        void getType()const;
//      DirectoryIterationItem(Core::DirectoryIterationFlags); //TODO: incomplete function definition
        void getName()const;
        void setModifyTime(long);
        void setCreateTime(long);
    };
}
