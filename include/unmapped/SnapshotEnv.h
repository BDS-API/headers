#pragma once

#include <string>


class SnapshotEnv /*public leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    class DeleteFileEntry;

    virtual ~SnapshotEnv(); // _ZN11SnapshotEnvD2Ev
    virtual void __fake_function0(); // fake
    virtual void NewSequentialFile__incomplete0(std::string const&, long **); //TODO: incomplete function definition // _ZN11SnapshotEnv17NewSequentialFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb14SequentialFileE
    virtual void NewRandomAccessFile__incomplete0(std::string const&, long **); //TODO: incomplete function definition // _ZN11SnapshotEnv19NewRandomAccessFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb16RandomAccessFileE
    virtual void NewWritableFile__incomplete0(std::string const&, long **); //TODO: incomplete function definition // _ZN11SnapshotEnv15NewWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    virtual void NewAppendableFile__incomplete0(std::string const&, long **); //TODO: incomplete function definition // _ZN11SnapshotEnv17NewAppendableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    virtual void DeleteFile(std::string const&); // _ZN11SnapshotEnv10DeleteFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void RenameFile(std::string const&, std::string const&); // _ZN11SnapshotEnv10RenameFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//    SnapshotEnv(long *); //TODO: incomplete function definition // _ZN11SnapshotEnvC2EPN7leveldb3EnvE
//    void _isQueuedForRemoval(long const&); //TODO: incomplete function definition // _ZN11SnapshotEnv19_isQueuedForRemovalERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
//    void _newWrappedWritableFile(std::string const&, long **); //TODO: incomplete function definition // _ZN11SnapshotEnv23_newWrappedWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    void createSnapshot(Core::Path const&); // _ZN11SnapshotEnv14createSnapshotERKN4Core4PathE
    void releaseSnapshot(); // _ZN11SnapshotEnv15releaseSnapshotEv
    class DeleteFileEntry {

    public:
//        DeleteFileEntry(long, bool); //TODO: incomplete function definition // _ZN11SnapshotEnv15DeleteFileEntryC2EN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEb
        ~DeleteFileEntry(); // _ZN11SnapshotEnv15DeleteFileEntryD2Ev
//        void execute(long *); //TODO: incomplete function definition // _ZN11SnapshotEnv15DeleteFileEntry7executeEPN7leveldb3EnvE
//        bool deletesPath(long const&); //TODO: incomplete function definition // _ZN11SnapshotEnv15DeleteFileEntry11deletesPathERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
        DeleteFileEntry(SnapshotEnv::DeleteFileEntry const&); // _ZN11SnapshotEnv15DeleteFileEntryC2ERKS0_
    };
};
