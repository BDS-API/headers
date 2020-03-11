#pragma once

#include "../core/Path.h"
#include "../bedrock/pack/PackAccessStrategy.h"


class ResourceSignature {

public:

    ResourceSignature();
    ~ResourceSignature();
    void areKnownFilesValid(PackAccessStrategy const&);
    void _areKnownFilesValid(PackAccessStrategy const&, bool);
    void areKnownFilesValidRequireSignatureExists(PackAccessStrategy const&);
    void _loadSignaturesFile(Core::Path const&, PackAccessStrategy const&);
    void _checkSignedFiles(PackAccessStrategy const&)const;
};
