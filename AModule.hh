#ifndef AMODULE_HH
#define AMODULE_HH

#include "Sniff.hh"
#include "Core.hh"

class AModule
{
protected:
    Core                &_core;
    const std::string   _name;

public:
    AModule(Core &core, const std::string &name);
    virtual ~AModule(void) { }

public:
    const std::string   &name(void) const;

public:
    virtual void        start(void) = 0;
    virtual void        stop(void) = 0;
};

#endif // AMODULE_HH
