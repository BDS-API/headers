#pragma once



class ResourceSignature {

public:
    void _loadSignaturesFile(Core::Path const&, PackAccessStrategy const&);
    void _areKnownFilesValid(PackAccessStrategy const&, bool);
    ResourceSignature();
    void _checkSignedFiles(PackAccessStrategy const&)const;
    void areKnownFilesValid(PackAccessStrategy const&);
    ~ResourceSignature();
    void areKnownFilesValidRequireSignatureExists(PackAccessStrategy const&);
};
