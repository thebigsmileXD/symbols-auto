#pragma once

class TeleportToSubcomponent : OnHitSubcomponent {

    virtual void ~TeleportToSubcomponent();
    virtual void ~TeleportToSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}