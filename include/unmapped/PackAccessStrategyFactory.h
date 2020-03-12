#pragma once



namespace PackAccessStrategyFactory {

    void createForDirectoryWithEncryptedBlob(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&);
    void createForZip(ResourceLocation const&, bool);
    void createForDirectory(ResourceLocation const&, bool);
    void create(ResourceLocation &, IContentKeyProvider const&, PackReport &, bool);
    void createForEncrypted(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool);
    void createForEncryptedZip(ResourceLocation const&, IContentKeyProvider const&);
};
