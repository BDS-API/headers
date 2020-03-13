#pragma once

#include <vector>
#include "../core/Result.h"
#include "../core/FileOpenMode.h"
#include <string>
#include "../core/Path.h"
#include <functional>


class JournaledFile {

public:
    std::string findReadPath(Core::Path); // _ZN13JournaledFile12findReadPathB5cxx11EN4Core4PathE
    std::string findBackupPath(Core::Path); // _ZN13JournaledFile14findBackupPathB5cxx11EN4Core4PathE
    void fileOrBackupExists(Core::Path); // _ZN13JournaledFile18fileOrBackupExistsEN4Core4PathE
    void populateImportantFiles(Core::Path, std::vector<std::string> &); // _ZN13JournaledFile22populateImportantFilesEN4Core4PathERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS8_EE
    bool isOldFile(Core::Path); // _ZN13JournaledFile9isOldFileEN4Core4PathE
    bool isNewFile(Core::Path); // _ZN13JournaledFile9isNewFileEN4Core4PathE
    JournaledFile(std::function<Core::Result (Core::Path)> &&); // _ZN13JournaledFileC2EOSt8functionIFN4Core6ResultENS1_4PathEEE
    ~JournaledFile(); // _ZN13JournaledFileD2Ev
    bool isOpen()const; // _ZNK13JournaledFile6isOpenEv
    void close(); // _ZN13JournaledFile5closeEv
//  void open(Core::Path, Core::FileOpenMode, Core::FileBufferingMode); //TODO: incomplete function definition // _ZN13JournaledFile4openEN4Core4PathENS0_12FileOpenModeENS0_17FileBufferingModeE
    void _flushFiles(); // _ZN13JournaledFile11_flushFilesEv
    void write(void const*, unsigned long); // _ZN13JournaledFile5writeEPKvm
    void flush(); // _ZN13JournaledFile5flushEv
    void getFile(); // _ZN13JournaledFile7getFileEv
    void getFile()const; // _ZNK13JournaledFile7getFileEv
};
