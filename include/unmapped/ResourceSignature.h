#pragma once

#include "../bedrock/pack/PackAccessStrategy"
#include "../core/Path"


class ResourceSignature {

public:

    ResourceSignature(void);
    void areKnownFilesValid(PackAccessStrategy const&);
    void _areKnownFilesValid(PackAccessStrategy const&, bool);
    void areKnownFilesValidRequireSignatureExists(PackAccessStrategy const&);
    void _loadSignaturesFile(Core::Path const&, PackAccessStrategy const&);
    void _checkSignedFiles(PackAccessStrategy const&)const;
};
