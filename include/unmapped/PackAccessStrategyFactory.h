#pragma once



class PackAccessStrategyFactory {

public:

    void create(ResourceLocation &, IContentKeyProvider const&, PackReport &, bool);
    void createForZip(ResourceLocation const&, bool);
    void createForDirectoryWithEncryptedBlob(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&);
    void createForEncrypted(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    void createForDirectory(ResourceLocation const&, bool);
    void createForEncryptedZip(ResourceLocation const&, IContentKeyProvider const&);
};
