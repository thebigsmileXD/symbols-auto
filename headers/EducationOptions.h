#pragma once

class EducationOptions : ResourcePackListener {

    virtual void ~EducationOptions();
    virtual void ~EducationOptions();
    virtual void onActiveResourcePacksChanged(ResourcePackManager &);
    virtual void onFullPackStackInvalid(void);
    virtual void onBaseGamePackDownloadComplete(void);
    virtual void onLanguageSubpacksChanged(void);
    virtual void onResourceManagerDestroyed(ResourcePackManager &);
}