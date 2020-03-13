#pragma once

#include <string>


class SnapshotEnv /*leveldb::EnvWrapper*/ { //TODO: incomplete class definition

public:
    class DeleteFileEntry;

    ~SnapshotEnv(); // _ZN11SnapshotEnvD2Ev
//  virtual void NewSequentialFile(std::string const&, leveldb::SequentialFile **); //TODO: incomplete function definition // _ZN11SnapshotEnv17NewSequentialFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb14SequentialFileE
//  virtual void NewRandomAccessFile(std::string const&, leveldb::RandomAccessFile **); //TODO: incomplete function definition // _ZN11SnapshotEnv19NewRandomAccessFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb16RandomAccessFileE
//  virtual void NewWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN11SnapshotEnv15NewWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
//  virtual void NewAppendableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN11SnapshotEnv17NewAppendableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    virtual void DeleteFile(std::string const&); // _ZN11SnapshotEnv10DeleteFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    virtual void RenameFile(std::string const&, std::string const&); // _ZN11SnapshotEnv10RenameFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  SnapshotEnv(leveldb::Env *); //TODO: incomplete function definition // _ZN11SnapshotEnvC2EPN7leveldb3EnvE
//  void _isQueuedForRemoval(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN11SnapshotEnv19_isQueuedForRemovalERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
//  void _newWrappedWritableFile(std::string const&, leveldb::WritableFile **); //TODO: incomplete function definition // _ZN11SnapshotEnv23_newWrappedWritableFileERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPPN7leveldb12WritableFileE
    void createSnapshot(Core::Path const&); // _ZN11SnapshotEnv14createSnapshotERKN4Core4PathE
    void releaseSnapshot(); // _ZN11SnapshotEnv15releaseSnapshotEv
    class DeleteFileEntry {

    public:
//      DeleteFileEntry(Core::PathBuffer<std::string>, bool); //TODO: incomplete function definition // _ZN11SnapshotEnv15DeleteFileEntryC2EN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEEb
        ~DeleteFileEntry(); // _ZN11SnapshotEnv15DeleteFileEntryD2Ev
//      void execute(leveldb::Env *); //TODO: incomplete function definition // _ZN11SnapshotEnv15DeleteFileEntry7executeEPN7leveldb3EnvE
//      bool deletesPath(Core::PathBuffer<std::string> const&); //TODO: incomplete function definition // _ZN11SnapshotEnv15DeleteFileEntry11deletesPathERKN4Core10PathBufferINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
        DeleteFileEntry(SnapshotEnv::DeleteFileEntry const&); // _ZN11SnapshotEnv15DeleteFileEntryC2ERKS0_
    };
};
