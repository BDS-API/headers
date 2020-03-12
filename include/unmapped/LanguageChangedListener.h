#pragma once



namespace I18n {

    class LanguageChangedListener {

    public:
        LanguageChangedListener(I18n::LanguageChangedListener &&);
        ~LanguageChangedListener();
    };
}
