#pragma once



namespace Core {

    class FileOpenMode {

    public:
        FileOpenMode(); // _ZN4Core12FileOpenModeC2Ev
        void readExisting(); // _ZN4Core12FileOpenMode12readExistingEv
        void writeCreateOrTruncate(); // _ZN4Core12FileOpenMode21writeCreateOrTruncateEv
        void writeCreateOrAppend(); // _ZN4Core12FileOpenMode19writeCreateOrAppendEv
        void binary(); // _ZN4Core12FileOpenMode6binaryEv
        void read(); // _ZN4Core12FileOpenMode4readEv
        void write(); // _ZN4Core12FileOpenMode5writeEv
        void create(); // _ZN4Core12FileOpenMode6createEv
        void truncate(); // _ZN4Core12FileOpenMode8truncateEv
        void append(); // _ZN4Core12FileOpenMode6appendEv
        void wb(); // _ZN4Core12FileOpenMode2wbEv
        void rb(); // _ZN4Core12FileOpenMode2rbEv
        void wPlus(); // _ZN4Core12FileOpenMode5wPlusEv
        void rbPlus(); // _ZN4Core12FileOpenMode6rbPlusEv
        void wbPlus(); // _ZN4Core12FileOpenMode6wbPlusEv
//      FileOpenMode(std::_Ios_Openmode); //TODO: incomplete function definition // _ZN4Core12FileOpenModeC2ESt13_Ios_Openmode
        FileOpenMode(char const*); // _ZN4Core12FileOpenModeC2EPKc
        void cMode(); // _ZN4Core12FileOpenMode5cModeEv
        void cModeWide(); // _ZN4Core12FileOpenMode9cModeWideEv
        void operator==(Core::FileOpenMode const&)const; // _ZNK4Core12FileOpenModeeqERKS0_
        bool isRead()const; // _ZNK4Core12FileOpenMode6isReadEv
        bool isWrite()const; // _ZNK4Core12FileOpenMode7isWriteEv
        bool isTruncate()const; // _ZNK4Core12FileOpenMode10isTruncateEv
        bool isCreate()const; // _ZNK4Core12FileOpenMode8isCreateEv
        bool isAppend()const; // _ZNK4Core12FileOpenMode8isAppendEv
        bool isBinary()const; // _ZNK4Core12FileOpenMode8isBinaryEv
        bool isReadOnly()const; // _ZNK4Core12FileOpenMode10isReadOnlyEv
    };
}
