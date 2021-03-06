#pragma once

class CatchFireSubcomponent : OnHitSubcomponent {

    virtual ~CatchFireSubcomponent();
    virtual ~CatchFireSubcomponent();
    virtual void readfromJSON(Json::Value &);
    virtual void writetoJSON(Json::Value &)const;
    virtual void doOnHitEffect(Actor &, ProjectileComponent &);
}
