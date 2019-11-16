#pragma once

class WebviewObserver : Core::Observer_ltWebviewObserver_Core::SingleThreadedLock_ge {

    virtual void ~WebviewObserver();
    virtual void ~WebviewObserver();
    virtual void Core::Observer<WebviewObserver, Core::SingleThreadedLock>::_onSubjectDestroyed(void);
    virtual void onLoadingBegin(void);
    virtual void onLoadingEnd(void);
    virtual void onError(WebviewError const&);
    virtual void onDownloadBegin(WebviewDownloadInfo const&);
    virtual void onDownloadUpdate(WebviewDownloadInfo const&);
    virtual void onDownloadComplete(WebviewDownloadInfo const&);
    virtual void onDownloadCanceled(WebviewDownloadInfo const&);
    virtual void onMessageRecieved(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
}
