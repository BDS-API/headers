#pragma once



namespace PackAccessStrategyFactory {

    void create(ResourceLocation &, IContentKeyProvider const&, PackReport &, bool); // _ZN25PackAccessStrategyFactory6createER16ResourceLocationRK19IContentKeyProviderR10PackReportb
    void createForZip(ResourceLocation const&, bool); // _ZN25PackAccessStrategyFactory12createForZipERK16ResourceLocationb
    void createForDirectoryWithEncryptedBlob(ResourceLocation const&, ResourceLocation const&, IContentKeyProvider const&); // _ZN25PackAccessStrategyFactory35createForDirectoryWithEncryptedBlobERK16ResourceLocationS2_RK19IContentKeyProvider
    void createForEncrypted(ResourceLocation const&, ContentIdentity const&, IContentKeyProvider const&, bool); // _ZN25PackAccessStrategyFactory18createForEncryptedERK16ResourceLocationRK15ContentIdentityRK19IContentKeyProviderb
    void createForDirectory(ResourceLocation const&, bool); // _ZN25PackAccessStrategyFactory18createForDirectoryERK16ResourceLocationb
    void createForEncryptedZip(ResourceLocation const&, IContentKeyProvider const&); // _ZN25PackAccessStrategyFactory21createForEncryptedZipERK16ResourceLocationRK19IContentKeyProvider
};
