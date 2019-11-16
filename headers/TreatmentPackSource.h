#pragma once

class TreatmentPackSource : PackSource {

    virtual void Treatment~TreatmentPackSource();
    virtual void Treatment~TreatmentPackSource();
    virtual void TreatmentforEachPackConst(std::function<void ()(Pack const&)>)const;
    virtual void TreatmentforEachPack(std::function<void ()(Pack &)>);
    virtual void TreatmentgetPackOrigin(void)const;
    virtual void TreatmentgetPackType(void)const;
    virtual void Treatmentload(PackManifestFactory &, IContentKeyProvider const&);
}
