#pragma once

class LootTableDescription : PropertyDescription {

    virtual void getJsonName(void)const;
    virtual void ~LootTableDescription();
    virtual void ~LootTableDescription();
    virtual void deserializeData(Json::Value &);
    virtual void serializeData(Json::Value &)const;
}