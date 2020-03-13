#pragma once



class ResourceSignature {

public:
    ResourceSignature(); // _ZN17ResourceSignatureC2Ev
    ~ResourceSignature(); // _ZN17ResourceSignatureD2Ev
    void areKnownFilesValid(PackAccessStrategy const&); // _ZN17ResourceSignature18areKnownFilesValidERK18PackAccessStrategy
    void _areKnownFilesValid(PackAccessStrategy const&, bool); // _ZN17ResourceSignature19_areKnownFilesValidERK18PackAccessStrategyb
    void areKnownFilesValidRequireSignatureExists(PackAccessStrategy const&); // _ZN17ResourceSignature40areKnownFilesValidRequireSignatureExistsERK18PackAccessStrategy
    void _loadSignaturesFile(Core::Path const&, PackAccessStrategy const&); // _ZN17ResourceSignature19_loadSignaturesFileERKN4Core4PathERK18PackAccessStrategy
    void _checkSignedFiles(PackAccessStrategy const&)const; // _ZNK17ResourceSignature17_checkSignedFilesERK18PackAccessStrategy
};
